#include <stdio.h>

int main() {
    int a = 8;
    int b = 3;

    if (a > b && a % b == 2){
        printf("a is bigger than b AND a mod b is 2\n");
    }
    else {
        printf("condition error\n");
    }
    return 0;
}