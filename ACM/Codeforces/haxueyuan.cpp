#include <iostream>

using namespace std;


int main() {
	long long n, sum = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
    return 0;
}