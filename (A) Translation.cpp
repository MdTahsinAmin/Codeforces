///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
 
	string str;
	string qtr;
	cin >> str >> qtr;
	reverse(str.begin(), str.end());
	if (str == qtr) {
		cout << "YES";
	}
	else cout << "NO";
}
