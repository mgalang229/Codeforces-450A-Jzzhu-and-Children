#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// find the last maximum ceil(a[i] / m)
	int mx = 0;
	for(int i = 0; i < n; i++) {
		mx = max(mx, (int) ceil((double) a[i] / m));
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		int cur = ceil((double) a[i] / m);
		if(cur == mx) {
			ans = i + 1;
		}
	}
	cout << ans << "\n";
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

