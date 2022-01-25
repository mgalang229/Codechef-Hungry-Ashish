#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, z;
		cin >> x >> y >> z;
		// compare the values and always choose the pizza (if possible)
		string ans = "PIZZA";
		if (y > x && z > x) {
			ans = "NOTHING";
		} else if (y > x) {
			ans = "BURGER";
		}
		cout << ans << '\n';
	}
	return 0;
}
