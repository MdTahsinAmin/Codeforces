///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 
#include<bits/stdc++.h>
 
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<int>ans;
		int p = 1;
		while (n > 0) {
			if (n % 10) ans.push_back(n % 10 * p);
			p *= 10;
			n /= 10;
		}
		cout << ans.size() << endl;
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << " ";
		}cout<<'\n';
	}
return 0;
}
