#include <stdio.h>
#include <string.h>

int solution(const char* my_string, const char* is_suffix) {
    int my_string_len = strlen(my_string);
    int is_suffix_len = strlen(is_suffix);

    // is_suffix의 길이가 my_string의 길이보다 크다면 접미사가 될 수 없습니다.
    if (is_suffix_len > my_string_len) {
        return 0;
    }

    // my_string에서 is_suffix와 일치하는 부분을 찾습니다.
    for (int i = my_string_len - is_suffix_len, j = 0; i < my_string_len; i++, j++) {
        if (my_string[i] != is_suffix[j]) {
            return 0; // 일치하지 않으면 0을 반환합니다.
        }
    }

    return 1; // 일치하면 1을 반환합니다.
}
