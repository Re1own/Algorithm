#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <random>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <fstream>
#include <numeric>
#define ri readint()
#define gc getchar()
#define R(x) scanf("%d", &x)
#define W(x) printf("%d\n", x)
#define init(a, b) memset(a, b, sizeof(a))
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define irep(i, a, b) for (int i = a; i >= b; i--)
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
const int inf = 0x3f3f3f3f;
const ll INF = 1e18;

void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	hasten();
	int n, cnt = 0;
	cin >> n;
	int bills[5] = {1, 5, 10, 20, 100};
	rep(i, 0, 4) {
		while(n >= bills[4-i]) {
			n -= bills[4-i];
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}











