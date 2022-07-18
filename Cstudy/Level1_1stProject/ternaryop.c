#include <stdio.h>

int main() {
    int a = 102;
    int b = 23;
    int max = (a > b) ? a : b;
    printf("max(a, b) is %d\n", max);
    return 0;
}