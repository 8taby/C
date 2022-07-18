#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    if (a > b || a % b == 2){
        printf("a is bigger than b OR a mod b is 2\n");
    }
    else {
        printf("condition error\n");
    }
    return 0;
}