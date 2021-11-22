#include <bits/stdc++.h>

using namespace std;

typedef struct tree {
    tree* left;
    tree* right;
    int data;
}* ptree;


ptree fathertree;

ptree createtree(int data, ptree &root) {	//传引用，通过改变指针变量指向的地址来改变指针变量的值
    if (root == nullptr) {
        ptree t = new tree; //这里必须动态分配，不然函数调用完就释放没了,也要想象一下，每个空节点赋值自己多了两个儿子，不然没有儿子
        t->data = data;
        t->left = nullptr;
        t->right = nullptr;
        return t;
    }
    else if (data < root->data) {
        root->left = createtree(data, root->left);
    }
    else if (data > root->data) {
        root->right = createtree(data, root->right);
    }
    return root;    //走到底后或者data值相等就直接返回啦!千万不要忘了!
}

void print(ptree now) {
    if (now != nullptr) {
        if (now == fathertree) {
            printf("%d",now->data);
        }
        else
            printf(" %d",now->data);
        print(now->left);
        print(now->right);
    }
}
int main()
{
    int N;
    while(~scanf("%d",&N)) {
        int t;
        fathertree = nullptr;
        while(N--) {
            scanf("%d", &t);
            fathertree = createtree(t, fathertree);
        }
        print(fathertree);
        printf("\n");
    }
    return 0;
}