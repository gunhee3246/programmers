#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    if(a%2==1&&b%2==1){
        return a*a+b*b;
    }
    else if(a%2==1||b%2==1){
        return 2*(a+b);
    }
    
    else{
        if(a>b){
            return a-b;
            }
        }
        return b-a;
}