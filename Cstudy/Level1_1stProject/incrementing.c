#include <stdio.h>

int main() {
    int a = -23;
    printf("negative value : %d\n", a);

    a = 0;
    printf("a++ (from a : 0) : %d\n", a++);
    printf("a (after a++) : %d\n", a++);

    a = 0;
    printf("a-- (from a : 0) : %d\n", a--);
    printf("a (after a--) : %d\n", a--);

    a = 0;
    printf("++a (from a : 0) : %d\n", ++a);

    a = 0;
    printf("--a (from a: 0) : %d\n", --a);

    a = 0;
    printf("starts from: %d;", a);
    printf(" %d;", a++);
    printf(" %d;", ++a);
    
    return 0;
}