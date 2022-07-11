#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double pi = 123413.14159;
    double pii = 123413.1415;
    printf("%lf\n", pi);
    printf("%lf\n", pii);
    printf("%15lf\n", pi);
    printf("%.1lf\n", pii);
    printf("%.3lf\n", pii);
    return 0;
}
