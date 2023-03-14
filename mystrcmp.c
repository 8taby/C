#include <stdio.h>
#include <string.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))

int mystrcmp(const char* s, const char* t);

char a[81], b[81];

int main() {
    scanf("%s", a);
    scanf("%s", b);

    int result = mystrcmp(a, b);
    printf("%d\n", result);
    return 0;
}

int mystrcmp(const char* s, const char* t) {
    int len1 = strlen(s), len2 = strlen(t);
    int len = min(len1, len2);
    for (int i = 0; i < len; i++) {
        if (s[i] == t[i])
            continue;
        else if (s[i] < t[i])
            return -1;
        else
            return 1;
    }
    if (len1 == len2)
        return 0;
    else if (len1 > len2)
        return -1;
    else
        return 1;
}