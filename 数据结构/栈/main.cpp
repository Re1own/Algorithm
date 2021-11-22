#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
    int date;
    Node * pNext;
}* pNode;
typedef struct cstack
{
    pNode ptop;
    pNode pbottom;
}* pstack;

void push_stack(pstack,int);
void __init__(pstack);
void travers_stack(pstack);
int main(void)
{
    cstack s;
    __init__(&s);
    push_stack(&s,1);
    push_stack(&s,2);
    push_stack(&s,3);
    travers_stack(&s);
    return 0;
}
void __init__(pstack s)
{
    s->pbottom = (pNode)malloc(sizeof(pNode));
    s->ptop = s->pbottom;
    s->ptop->pNext = nullptr;
}
void push_stack(pstack s, int n)
{
    pNode newlist = (pNode)malloc(sizeof(pNode));
    newlist->date = n;
    newlist->pNext = s->ptop;
    s->ptop = newlist;
}
void travers_stack(pstack s)
{
    pstack ss = s;
    while(ss->ptop->pNext != nullptr)
    {
        cout << ss->ptop->date << endl;
        ss->ptop = ss->ptop->pNext;
    }
}
