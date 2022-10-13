#include <stdio.h>
 
int main() {
    int a[15][15] = { 0, };
    int num = 1, x = 0, y = 0;
    int i, k, j;
    int size = 15;
    int sign = 1;
 
    for (k = 0; k < size; ++k) {
        a[y][x] = num++;
        x += sign;
    }
    x -= 1;
    for (i = size - 1;i > 0; --i) {
        for (j = 0; j < i; ++j) {
            y += sign;
            a[y][x] = num++;
        }
        sign *= -1;
        for (k = 0; k < i; ++k) {
            x += sign;
            a[y][x] = num++;
        }
    }
 
    for (int i = 0; i < size; ++i) {    
        for (int j = 0; j < size; ++j) {
            printf("%3d ", a[i][j]);
        }
        printf("\n\n");
    }    
 
    return 0;
}