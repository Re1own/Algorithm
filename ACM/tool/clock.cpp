#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int main(void) {
	clock_t start, end;
	start = clock();
	vector<int> haha;
	for (int i = 0; i < 10000000; i++) {
		haha.push_back(i);
	}
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
	return 0;
}