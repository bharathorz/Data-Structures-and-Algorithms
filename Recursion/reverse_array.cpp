#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& v, int st, int end) {
	if (st >= end) {
		return;
	}
	swap(v[st], v[end]);
	reverse(v, st + 1, end - 1);
}

int main() {

	vector<int> v({1, 2, 3, 4});

	reverse(v, 0, v.size() - 1);

	for (auto x : v) {
		cout << x << " ";
	}

	return 0;
}
