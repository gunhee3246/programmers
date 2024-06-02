#include <stdio.h>

int solution(int n, const char* control) {
    int i;
    for (i = 0; control[i] != '\0'; i++) {
        switch (control[i]) {
            case 'w':
                n += 1;
                break;
            case 's':
                n -= 1;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
            default:
                break;
        }
    }
    return n;
}
