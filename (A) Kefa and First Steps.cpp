///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
 
	int n;
	cin >> n;
	int cnt = -1;
	int ans = 0;
	int step = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x >= step) {
			cnt++;
			ans = max(ans, cnt);
		}
		else cnt = 0;
		step = x;
	}
	cout << ans + 1;
}
