#include <bits/stdc++.h>
using namespace std;

struct Child {
	int candies;
	int position;
};

void TestCase() {
	int n, m;
	cin >> n >> m;
	vector<Child> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i].candies;
		a[i].position = i + 1;
	}
	// exact simulation in the problem statement
	int ans = 0;
	while(true) {
		vector<Child> vec;
		for(int i = 0; i < (int) a.size(); i++) {
			if(a[i].candies > m) {
				a[i].candies -= m;
				vec.push_back(a[i]);
			}
		}
		if((int) vec.size() > 0) {
			ans = vec.back().position;
			a = vec;
		} else {
			break;
		}
	}
	cout << (ans > 0 ? ans : n) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

