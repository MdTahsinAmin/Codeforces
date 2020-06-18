///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x < y && (y - x) >= 2) ans++;
 
	}
	cout << ans;
 
}
