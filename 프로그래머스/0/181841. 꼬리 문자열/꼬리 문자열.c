#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
    char* answer = (char*)malloc(100);
    memset(answer,0x00,100);
    int i;
    
    for(i=0;i<str_list_len;i++){
        if(strstr(str_list[i],ex)==NULL){
            strcat(answer,str_list[i]);
        }
    }
    strcat(answer,"\0");
    return answer;
}