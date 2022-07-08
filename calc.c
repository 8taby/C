#include <stdio.h>

int main(void) {
    int a = 1, b;
    a++;
    printf("1++ 결과 = %d\n", a);
    ++a;
    printf("++2 결과 = %d\n", a);
    b = a++;
    printf("b = a++ 결과 : a = %d, b = %d\n", a, b);
    b = ++a;
    printf("b = ++a 결과 : a = %d, b = %d\n", a, b);
    b = a--;
    printf("b = a-- 결과 : a = %d, b = %d\n", a, b);
    b = --a;
    printf("b = --a 결과 : a = %d, b = %d\n", a, b);
    return 0;
}