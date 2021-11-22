#include <bits/stdc++.h>
#define DebugP(x) std::cout << "Line" << __LINE__ << " " << #x << "=" << x << std::endl
using namespace std;

typedef struct tree
{
    tree * left_child;
    tree * right_child;
    char date;
}* ptree;

ptree creat_tree(void)
{
    ptree a = (ptree)malloc(sizeof(tree));
    ptree b = (ptree)malloc(sizeof(tree));
    ptree c = (ptree)malloc(sizeof(tree));
    ptree d = (ptree)malloc(sizeof(tree));
    ptree e = (ptree)malloc(sizeof(tree));
    ptree f = (ptree)malloc(sizeof(tree));
    a->date = 'A';
    b->date = 'B';
    c->date = 'C';
    d->date = 'D';
    e->date = 'E';
    f->date = 'F';
    a->left_child = b;
    b->left_child = c;
    c->left_child = c->right_child = nullptr;
    b->right_child = d;
    d->left_child = d->right_child = nullptr;
    a->right_child = e;
    e->left_child = f;
    e->right_child = nullptr;
    f->left_child = f->right_child = nullptr;
    return a;
}
void pre_travers(ptree head)
{
    if (head != nullptr)
    {
        printf("%c\n",head->date);
        pre_travers(head->left_child);
        pre_travers(head->right_child);
    }
}
int main()
{
    ptree BTfather = creat_tree();
    pre_travers(BTfather);
    return 0;
}
