#include<bits/stdc++.h>

using namespace std;

int main(){

int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int x = k*l;
int en = (x/n);
int y =(c*d);
int z = (p/np);
cout<<en<<" "<<y<<" "<<z;
int ci = min(en,min(y,z))/n;
cout<<ci<<endl;

}
