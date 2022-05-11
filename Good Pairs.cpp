#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<unordered_map>
#include<unordered_set>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0 ; i<n ; i++){
            cin >>a[i];
        }
        for(int i=0 ; i<n ; i++){
            cin >>b[i];
        }
       
        map<pair< int,int >,int >sol;
        long long mac = 0;
        for(int i=0 ; i<n ; i++){
            int temp=a[i];
            int flag=b[i];
            mac += sol[{ temp,flag }];
            sol[{flag,temp}]++;
        }
      cout<<mac<<endl;
    }
    return 0;
}
// nt main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n;
//       cin>>n;
//       vector<int> a(n), b(n);
//       for(int &x: a) cin>>x;
//       for(int &x: b) cin>>x;
//       map<pair<int,int>,int> pre;
//       long long ans = 0;
//       for(int i=0;i<n;i++){
//           ans += pre[{a[i],b[i]}];
//           pre[{b[i],a[i]}]++;
//       }
//       cout<<ans<<'\n';
//   }
//   return 0;



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n;
//       cin>>n;
//       vector<int> a(n), b(n);
//       for(int &x: a) cin>>x;
//       for(int &x: b) cin>>x;
//       map<pair<int,int>,int> pre;
//       long long ans = 0;
//       for(int i=0;i<n;i++){
//           ans += pre[{a[i],b[i]}];
//           pre[{b[i],a[i]}]++;
//       }
//       cout<<ans<<'\n';
//   }
//   return 0;
// }
