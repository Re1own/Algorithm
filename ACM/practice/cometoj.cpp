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
	int T, j = 1;
	cin >> T;
	while(T--) {
		int n, times;
		cin >> n;
		vector<ull> a(n), b(n);
		rep(i, 0, n-1) {
			cin >> a[i];
		}
		b = a;
		sort(a.begin(), a.end());
		ll ans1 = a[n-1], ans2 = a[n-2];
		//cout << ans1 << ans2 << endl;
		cout << "Case # "<< j<< ": ";
		rep(i, 0, n-1) {
			if (b[i] == ans1) {
				cout << ans1 << ans2 << endl;
				break;
			}
			else if (b[i] == ans2) {
				cout << ans2 << ans1 << endl;
				break;
			}
		}
		j++;
	}
	return 0;
}