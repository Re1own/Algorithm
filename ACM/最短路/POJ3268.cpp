#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int N, M, X;
const int maxn = 1e3+5;
struct node {
    int to, time;
    node(){};
    node (int a, int b) {
        to = a, time = b;
    }
};
vector<node> num[maxn];

int main(void) {
    scanf("%d %d %d", &N, &M, &X);
    while(M--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        num[a].push_back(node(b,c));
        
        
    }
    return 0;
}
