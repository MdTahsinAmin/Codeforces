///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 
#include<bits/stdc++.h>
using namespace std;
const int mx = 110;
vector<int>adj[mx];
bool isVis[mx];
 
void dfs(int u){
 
isVis[u] = 1;
 
for(auto v : adj[u]){
     if(isVis[v]==0){
        dfs(v);
     }
}
 
}
 
 
int main(){
int n,m;
cin>>n>>m;
int cnt = 0;
for(int i =1;i<=m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
for(int i =1;i<=n;i++){
     if(isVis[i]==0){
        cnt++;
        dfs(i);
     }
}
cout<<(1LL<<(n-cnt))<<endl;
 
return 0;
}
 
