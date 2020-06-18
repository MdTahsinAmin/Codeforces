///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
 
	int n;
	cin >> n;
	string str;
	cin >> str;
	map<char, int > p;
	int ans = 0;
	char x = 'A';
	char y = 'D';
	for (int i = 0; i < str.size(); i++) {
		p[str[i]]++;
	}
	int me  = p[x];
	int next = p[y];
	if (me > next) {
		cout << "Anton";
	}
	else if (me == next) {
		cout << "Friendship";
	}
	else cout << "Danik";
 
}
