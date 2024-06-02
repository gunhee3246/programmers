#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int num1;
    num1=num%n;
    if(num1==0){
        return 1;
    }
    return 0;
}