#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
    int date;
    Node * pNext;
}* pNode;

pNode creat_list(void);
void insert_list(pNode,int,int);
void travers_list(pNode);
void del_list(pNode);

int main(void)
{
    pNode Head = (pNode)malloc(sizeof(pNode));
    Head = creat_list();
    int position,v;
    printf("请输入您想要插入的位置和对应插入的数值\n");
    scanf("%d %d",&position,&v);
    insert_list(Head,position,v);
    travers_list(Head);
    del_list(Head);
    travers_list(Head);
    return 0;
}
void insert_list(pNode phead,int position, int v)
{
    int i = 1;
    pNode Newlist = (pNode)malloc(sizeof(pNode));
    Newlist->date = v;
    pNode t = phead;
    while(i != position)
    {
        t = t->pNext;
        i++;
    }
    Newlist->pNext = t->pNext;
    t->pNext = Newlist;
}
pNode creat_list(void)
{
    int n;
    printf("请输入您想要创建的链表的长度\n");
    cin >> n;
    pNode phead = (pNode)malloc(sizeof(pNode));
    pNode ptail = (pNode)malloc(sizeof(pNode));
    ptail = phead;
    ptail->pNext = nullptr;
    while(n--)
    {
        pNode Newlist = (pNode)malloc(sizeof(pNode));
        int value;
        cin >> value;
        Newlist->date = value;
        Newlist->pNext = nullptr;
        ptail->pNext = Newlist;
        ptail = ptail->pNext;
    }
    return phead;
}
void travers_list(pNode phead)
{
    pNode haha = phead->pNext;
    while(haha != nullptr)
    {
        cout << haha->date << endl;
        haha = haha->pNext;
    }
}
void del_list(pNode head)
{
    int position;
    printf("请输入您想要删除的链表的位置\n");
    scanf("%d",&position);
    pNode d = (pNode)malloc(sizeof(pNode));
    d = head;
    int i = 1;
    while(i != position)
    {
        d = d->pNext;
        i++;
    }
    pNode g = d->pNext;
    d->pNext = d->pNext->pNext;
    free(g);
}

















