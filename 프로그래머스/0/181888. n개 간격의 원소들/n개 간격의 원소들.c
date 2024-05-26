#include <stdio.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    if (n <= 0) {
        return NULL; // 유효하지 않은 `n` 값인 경우 NULL 반환
    }

    size_t answer_len = (num_list_len + n - 1) / n; // 올림 나눗셈으로 결과 배열 길이 계산
    int* answer = (int*)malloc(answer_len * sizeof(int));
    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }

    for (size_t i = 0, a = 0; i < num_list_len; i += n, ++a) {
        answer[a] = num_list[i];
    }

    return answer;
}
