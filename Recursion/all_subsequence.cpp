#include <bits/stdc++.h>
using namespace std;

void printAllSubsequence(int ind, vector<int>& v, vector<int> tmp, vector<vector<int>>& ans) {

	if (ind == v.size()) {
		ans.push_back(tmp);
		return;
	}

	//pick
	tmp.push_back(v[ind]);
	printAllSubsequence(ind + 1, v, tmp, ans);
	//not pick
	tmp.pop_back();
	printAllSubsequence(ind + 1, v, tmp, ans);
}

int main() {

	vector<vector<int>> ans;
	vector<int> tmp;
	vector<int> v({1, 2, 3, 4});
	printAllSubsequence(0, v, tmp, ans);
	cout << ans.size() << endl;
	for (auto arr : ans) {
		for (auto x : arr) {
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;
}
