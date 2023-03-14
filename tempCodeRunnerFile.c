#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char *name;
    struct node *link;
};

int getname(char *);
struct node *addlist(struct node *, char *);
char *namecopy(char *);
void listprint(struct node *);
struct node *invert(struct node *);

int main(void) {
    struct node *root;
    char name[80];
    root = NULL;
    while (getname(name) != EOF)
        root = addlist(root, name);
    listprint(root);
    root = invert(root);
    printf("-----invert-----\n");
    listprint(root);
    return 0;
}

int getname(char *pname) {
    int i = 0;
    char c;
    while (((c = getchar()) != '\n') && c != EOF)
        *(pname + i++) = c;
    if (c == '\n')
        *(pname + i) = '\0';
    if (c == EOF)
        *pname = EOF;
    return *pname;
}

struct node *addlist(struct node *p, char *w) {
    if (p == NULL) {
        p = (struct node *)malloc(sizeof(struct node));
        p->name = namecopy(w);
        p->link = NULL;
    } else
        p->link = addlist(p->link, w);

    return p;
}

char *namecopy(char *s) {
    char *p;
    int i = 0;
    p = (char *)malloc(strlen(s) + 1);
    while ((*(p + i) = *(s + i)) != '\0') i++;
    return p;
}

void listprint(struct node *p) {
    while (p != NULL) {
        printf("%s\n", p->name);
        p = p->link;
    }
}

struct node *invert(struct node *head) {
    struct node *res, *tmp, *p = head;
    // 결과 저장 res, 임시 저장 tmp
    // head를 따라가는 포인터 p
    res = tmp = NULL;

    while (p != NULL) {
        tmp = res;        // 우선 뒤집을 포인터의 헤드를 따라간다.
        res = p;          // 뒤집을 포인터의 헤드로 간다.
        p = p->link;      // 뒤집을 포인터의 접근 위치를 다음으로 옮긴다.
        res->link = tmp;  // 뒤집을 포인터의 헤드 링크를 뒤집을 포인터에 삽입한다.
    }

    return res;  // 뒤집은 포인터의 결과 리턴
}
