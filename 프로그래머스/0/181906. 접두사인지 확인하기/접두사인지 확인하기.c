#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    // is_prefix의 길이를 구합니다.
    size_t prefix_len = strlen(is_prefix);
    
    // my_string의 처음 prefix_len만큼과 is_prefix를 비교합니다.
    if (strncmp(my_string, is_prefix, prefix_len) == 0) {
        return 1; // is_prefix가 my_string의 접두사일 경우 1을 반환합니다.
    } else {
        return 0; // 그렇지 않을 경우 0을 반환합니다.
    }
}