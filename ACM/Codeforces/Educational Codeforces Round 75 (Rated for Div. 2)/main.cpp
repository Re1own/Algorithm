#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* pnext;
}* pnode;

int main() {
    pnode Head = (pnode)malloc(sizeof(node));
    pnode t;
    t->data = 1, t->pnext = NULL;
    Head->pnext = t;
    return 0;
}