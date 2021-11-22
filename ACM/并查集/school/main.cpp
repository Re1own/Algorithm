#include <iostream>
#include <malloc>

using namespace std;

struct node{
    int data;
    struct node* pnext;
}* pnode;

int main(void) {
    pnode head = (pnode)malloc(sizeof(node));
    
    return 0;
}
