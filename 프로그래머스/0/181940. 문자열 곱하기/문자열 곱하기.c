#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    int my_len=strlen(my_string);
    int i;
    char* answer = (char*)malloc(sizeof(char)*k*(my_len+1));
    for(i=0;i<my_len*k;i++){
        answer[i]=my_string[i%my_len];
    }
    answer[i]='\0';
    return answer;
}