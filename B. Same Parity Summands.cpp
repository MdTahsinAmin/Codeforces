///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    if(n<k) cout<<"NO"<<endl;
    else if((n%2==0&&k%2==0)||(n%2==1&&k%2==1)){
        cout<<"YES"<<endl;
        for(int i =1;i<k;i++){
            cout<<"1"<<" ";
            n--;
        }
        cout<<n<<endl;
    }
    else if(n%2==0&&k%2==1){
        if(n/2>=k){
            cout<<"YES"<<endl;
            for(int i = 1;i<k;i++){
                cout<<"2"<<" ";
                n-=2;
            }
            cout<<n<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(n%2==1&&k%2==0){
        cout<<"NO"<<endl;
    }
}
  return 0;
}
 
