#include <stdio.h>

int primeNum(int num) {
    int i, cnt = 0;
    for (i=2; i<num; i++) {
        if (num % i == 0) {
            cnt++;
        }
    }
    int result;
    if (cnt == 0) {
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

int main() {
    int start, end;
    int clap = 0;

    scanf("%d %d", &start, &end);
if (start <= 0 || end <= 0) {
        printf("Integers must be positive value!\n");
        return 0;
    }

    else {
        if (end <= start) {
            printf("Wrong input range!\n");
            return 0;
        }

        else {
            int i;
            for (i = start; i <= end; i++) {
                int a = 0;
                int x = i;
                int p = 0;
                while (x >= 1) {
                    if (x % 10 == 3 || x % 10 == 6 || x % 10 == 9) {
                        a = a + 1;
                        p = p + primeNum(x);
                        x = x / 10;
                    }

                    else {
                        x = x / 10;
                    }
                }
                clap = clap + a + p;
                a = 0;
            }
        }
    }
printf("%d\n", clap);

    return 0;
}