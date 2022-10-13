#include <stdio.h>

int digitSum(int num){
    static int a = 0;
    static int sum = 0;

    if (num != 0) {
        if (a == 0) {
            printf("%d", num % 10);
            sum = sum + (num % 10);
            a = a + 1;
            num /= 10;
            digitSum(num);
        }
        
        else {
            printf(" + %d", num % 10);
            sum = sum + (num % 10);
            num /= 10;
            digitSum(num);
        }
    }

    else {
        printf(" = %d\n", sum);
        return 0;
    }
}

int main() {
   int a;
   scanf("%d", &a);   
   printf("%d\n", digitSum(a));   
   return 0;
}