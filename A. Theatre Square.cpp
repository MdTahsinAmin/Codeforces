#include<iostream>
#define ll long long 
using namespace std;
 
int main(){
 
 ll n,m,a;
 cin>>n>>m>>a;
 ll ans =0;
 ll ans1 =0;
ll result ;
 
 if(n%a==0){
 	ans+=(n/a);
 }
 else ans+=(n/a)+1;
 
 if(m%a==0){
 	ans1+=(m/a);
 }
 else ans1+=(m/a)+1;
 
 result = ans*ans1;
 cout<<result;
 
}
