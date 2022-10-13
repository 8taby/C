#include <stdio.h>

int main() {
    int a, b, i, n, count = 0;
	scanf("%d %d", &a, &b);
    for (n = a; n <= b; n++) {
        while (n) {
            if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) {
                count++;
                for (i=2; i<n; i++) {
                    if (n % i == 0) {
                        break;
                    }
                }
                if ( i == n ) {
                    count++;
                }
            }
            n /= 10;
        }
    }
    printf("%d\n", count);
    return 0;
}
