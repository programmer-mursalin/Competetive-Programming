#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n,-1),a(n);
for(int i=0;i<n;i++)cin>>a[i];

vector<pair<int,int>>vp;

for(int i=n-1;i>=0;i--){
auto it=lower_bound(vp.begin(),vp.end(),make_pair(-a[i],1e9));
if(it!=vp.end()){
v[i]=it.second-i-1;
}
if(vp.empty()  || -vp.back().first>a[i]){
vp.push_back({-a[i],i});
}
}
for(auto it:v)cout<<it<<" ";
cout<<endl;

}