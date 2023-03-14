#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 1
#define CHR 2

int numcmp(const char *, const char *);
int (*fcmp(char *, char *))(const char *, const char *);

int main() {
    int (*ptr)(const char *, const char *);
    
    char s[80], t[80];
    scanf("%s %s", s, t);

    ptr = fcmp(s, t);
    printf("%d\n", ptr(s, t));
    return 0;
}

int numcmp(const char *s1, const char *s2) {
    float f1, f2;

    f1 = atof(s1);
    f2 = atof(s2);

    if (f1 > f2)
        return 1;
    else if (f1 < f2)
        return -1;
    else
        return 0;
}

int (*fcmp(char *s1, char *s2))(const char *s1, const char *s2) {
    int cond;
    cond = NUM;

    if (*s1 == '-') s1++;
    while (*s1 != '\0') {
        if ((0 <= *s1 && *s1 <= 9) || *s1 == '.')
            s1++;
        else {
            cond = CHR;
            break;
        }
    }

    if (*s2 == '-') s2++;
    while (*s2 != '\0' && cond == NUM) {
        if ((0 <= *s2 && *s2 <= 9) || *s2 == '.')
            s2++;
        else {
            cond = CHR;
            break;
        }
    }

    if (cond == CHR)
        return strcmp;
    else
        return numcmp;
}