#include <stdio.h>
#include <string.h>

#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);

    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    int answer_len = s1_len + s2_len + 1;
    char answer[answer_len];

    strcpy(answer, s1);
    strcat(answer, s2);

    printf("%s\n", answer); // 문자열을 출력합니다.

    return 0;
}
