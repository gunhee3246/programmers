#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void arrcal(int n, int x, int y, int* num, int** arr) {
    int i, j;
    int sol = arr[x][y];
    bool same = true;

    // Check if all elements in the subarray are the same
    for (i = x; i < x + n; i++) {
        for (j = y; j < y + n; j++) {
            if (arr[i][j] != sol) {
                same = false;
                break;
            }
        }
        if (!same)
            break;
    }

    if (same) {
        if (sol == 0)
            num[0]++;
        else
            num[1]++;
    } else {
        // Recursively call arrcal for each quadrant of the subarray
        arrcal(n / 2, x, y, num, arr);
        arrcal(n / 2, x + n / 2, y, num, arr);
        arrcal(n / 2, x, y + n / 2, num, arr);
        arrcal(n / 2, x + n / 2, y + n / 2, num, arr);
    }
}

int* solution(int** arr, size_t arr_rows, size_t arr_cols) {
    int n = arr_rows;
    int x = 0;
    int y = 0;
    int num[2] = {0};
    arrcal(n, x, y, num, arr);
    
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = num[0];
    answer[1] = num[1];
    return answer;
}
