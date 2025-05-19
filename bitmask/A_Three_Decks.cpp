




#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
#define ll long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7


void solve()
{

   int n,k;
       cin>>n>>k;
       vector<int>arr;
       for(int i=0;i<n;i++){
        int c;
        cin>>c;
        arr.push_back(c);
       }
       int low=0,high=n+1;
       int ans=-1;
       while(high>=low){
           int mid=(high+low)/2;
           set<int>ase;
           int part=0;
           for(int i=0;i<n;i++){
             if(ase.size()>=mid){
                ase.clear();
                    ++part;
             }
               if(arr[i]<mid)ase.insert(arr[i]);
           }
           if(ase.size()>=mid)++part;
           if(part>=k){
             ans=mid;
             low=mid+1;
           }else high=mid-1;
       }
       cout<<ans<<endl;
}
// sort(ALL(a),greater<int>());
// int maxi=*max_element(a.begin(),a.end());
//  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
