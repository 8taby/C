#include <stdio.h>

int main() {
    int a = 5; // [0 * 29][1][0][1]
    int b = 3; // [0 * 29][0][1][1]

    printf("bitwise a AND b : %d\n", a & b); // [0 * 29][0][0][1]
    printf("bitwise a OR b : %d\n", a | b); // [0 * 29][1][1][1]
    printf("bitwise a XOR (exclusive OR) b : %d\n\n", a ^ b); // [0 * 29][1][1][0]

    printf("bit Shift a >> 1 : %d\n", a >> 1); // [0][0 * 29][1][0]
    printf("bit Shift a << 1 : %d\n\n", a << 1); // [0 * 28][1][0][1][0]

    int c = -5; // [1 * 29][0][1][1]
    printf("bit Shift c >> 1 : %d \n", c >> 1); // [1][1 * 29][0][1]
    printf("bit Shift c << 1: %d\n\n", c << 1); // [1 * 28][0][1][1][0]

    unsigned int d = -1; // [1 * 29][1][1][1]
    printf("unsigned int -1 : %u\n", d); // 2^31 + 2^30 + ... + 2^0
    printf("bit Shift d >> 1 : %u\n", d >> 1); // [0][1 * 29][1][1]
    printf("bit Shift d << 1: %u\n\n", d << 1); // [1 * 28][1][1][1][0]
    return 0;
}