#include <stdio.h>

int main() {
    int a = 7;
    int b = 3;
    int c = ++a - b--;
    
    printf("%d\n", c + ++c);
}