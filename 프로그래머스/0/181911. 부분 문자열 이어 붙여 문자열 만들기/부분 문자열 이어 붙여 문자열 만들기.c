#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// my_strings_len은 배열 my_strings의 길이입니다.
// parts_rows는 2차원 배열 parts의 행 길이, parts_cols는 2차원 배열 parts의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {
    int ch_len=0;
    int i,j;
    int num=0;
    int num2=0;
    for(i=0;i<parts_rows;i++){
        ch_len=ch_len+parts[i][1]-parts[i][0]+1;
        }
    
    char* answer = (char*)malloc(ch_len+1);
    for(i=0;i<parts_rows;i++){
        num2 =parts[i][0];
        for(j=num2;j<num2+(parts[i][1]-parts[i][0]+1);j++){
            answer[num]=my_strings[i][j];
            num++;
        }
        
    }
    answer[ch_len]='\0';
    return answer;
}