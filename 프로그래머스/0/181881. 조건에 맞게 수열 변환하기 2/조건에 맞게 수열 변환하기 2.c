#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int i;
    int j = 0;
    bool changed;
    
    int arr_d[arr_len];  // 현재 상태를 저장할 배열
    int arr_prev[arr_len];  // 이전 상태를 저장할 배열

    // 초기 상태를 arr_d에 복사
    for (i = 0; i < arr_len; i++) {
        arr_d[i] = arr[i];
    }

    do {
        changed = false;

        // 현재 상태를 이전 상태로 저장
        for (i = 0; i < arr_len; i++) {
            arr_prev[i] = arr_d[i];
        }

        // 배열을 조건에 따라 수정
        for (i = 0; i < arr_len; i++) {
            if (arr_d[i] >= 50 && arr_d[i] % 2 == 0) {
                arr_d[i] = arr_d[i] / 2;
            } else if (arr_d[i] < 50 && arr_d[i] % 2 == 1) {
                arr_d[i] = arr_d[i] * 2 + 1;
            }
        }

        // 변경된 배열이 이전 배열과 다른지 확인
        for (i = 0; i < arr_len; i++) {
            if (arr_d[i] != arr_prev[i]) {
                changed = true;
                break;
            }
        }

        j++;
    } while (changed);

    return j - 1;
}