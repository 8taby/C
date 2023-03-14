#include <stdio.h>
#include <stdlib.h>

typedef struct llnode {
    int n;
    struct llnode *next;
} node;

node *append(node *root, int n) {
    if (root) {
        root->next = append(root->next, n);
        return root;
    } else {
        node *newNd = (node*)malloc(sizeof(node));
        newNd->n = n;
        newNd->next = NULL;
        return newNd;
    }
}

void print(node *root) {
    while (root) {
        printf("%d", root->n);
        root = root->next;
    }
}

void freell(node *root) {
    if (root) {
        freell(root->next);
        free(root);
    }
}

int main() {
    
}