def solution(s):
    answer = True
    count=1
    mode=1
    for i in range(len(s)):
        if(i==0):
            if s[i]!='(':
                ansnswer=False
                break
        else:
            if count<0:
                ansnswer=False
                break
            elif s[i-1]==s[i]:
                if(mode==1):
                    count+=1
                else:
                    mode=0
                    count-=1
            elif s[i-1]!=s[i]:
                if(mode==1):
                    mode=0
                    count-=1
                else:
                    mode=1
                    count+=1
    if(count==0):
        answer=True
    else:
        answer=False
    return answer