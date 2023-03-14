#include <stdio.h>
#include <stdlib.h>

struct tnode {
    int item;
    struct tnode *left;
    struct tnode *right;
};

struct tnode *addtree(struct tnode *, int);
void deletetree(struct tnode **, int);
void treeprint(struct tnode *);

int main() {
    struct tnode *root;
    int cond, num;
    root = NULL;

    while (1) {
        printf("1 : 삽입    2 : 삭제    3 : 출력    4 : 종료\n");
        scanf("%d", &cond);

        if (cond == 1) {
            printf("Add Number\n");
            scanf("%d", &num);
            root = addtree(root, num);
        } else if (cond == 2) {
            printf("Delete Number\n");
            scanf("%d", &num);
            deletetree(&root, num);
        } else if (cond == 3) {
            treeprint(root);
        } else if (cond == 4) {
            break;
        } else {
            printf("Wrong Input\n");
            exit(1);
        }
    }
    return 0;
}

struct tnode *addtree(struct tnode *p, int num) {
    if (p == NULL) {
        p = (struct tnode*)malloc(sizeof(struct tnode));
        p->item = num;
        p->left = p->right = NULL;
    } else if (num == p->item) {
        printf("존재하는 숫자입니다\n");
    } else if (num < p->item) {
        p->left = addtree(p->left, num);
    } else {
        p->right = addtree(p->right, num);
    }

    return p;
}

void treeprint(struct tnode *p) {
    if (p != NULL) {
        treeprint(p->left);
        printf("%d\n", p->item);
        treeprint(p->right);
    }
}

void deletetree(struct tnode **root, int num) {
    struct tnode *prev, *deleted, *parent, *move;

    prev = parent = move = NULL;
    deleted = *root;

    while (deleted) {
        if (num == deleted->item) {
            break;
        } else if (num < deleted->item) {
            prev = deleted;
            deleted = deleted->left;
        } else {
            prev = deleted;
            deleted = deleted->right;
        }
    }

    if (deleted == NULL) {
        printf("삭제하고자 하는 숫자가 존재하지 않습니다.\n");
        exit(1);
    }

    if (deleted->left) {
        parent = deleted;
        move = deleted->left;

        while(move->right) {
            parent = move;
            move = move->right;
        }

        deleted->item = move->item;

        if (parent == deleted) {
            parent->left = move->left;
        } else {
            parent->right = move->left;
        }

        free(move);
    } else if (deleted->right) {
        parent = deleted;
        move = deleted->right;

        while(move->left) {
            parent = move;
            move = move->left;
        }

        deleted->item = move->item;

        if (parent == deleted) {
            parent->right = move->right;
        } else {
            parent->left = move->right;
        }

        free(move);
    } else if (prev == NULL) {
        free(deleted);
        *root = NULL;
    } else if (deleted == prev->left) {
        prev->left = NULL;
        free(deleted);
    } else if (deleted == prev->right) {
        prev->right = NULL;
        free(deleted);
    }
}