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
// int main(){
//     Fast
//     int t;
//     cin >> t;
//     while(t--){
//         ll n,ans;
//         cin >> n;
//         vector<ll>v(n),a,b;
//         for(int i=0 ; i<n ; i++){
//             cin >> v[i];
//         }
//         for(int i=0 ; i<n ; i++){
//             if(i%2==0){
//                 ans += abs(v[i]);
//                 a.push_back(abs(v[i]));
//             }
//             else{
//                 ans += -1*abs(v[i]);
//                 b.push_back(abs(v[i]));
//             }
//         }
//         int maxa = *max_element(a.begin(), a.end());
//         int mina = *min_element(a.begin(), a.end());
//         int maxb = *max_element(b.begin(), b.end());
//         int minb = *min_element(b.begin(), b.end());
//         if(mina<maxb) {
//             ans = ans+2*(maxb-mina);
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
#define take(x) for(auto &y:x) cin>>y

#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())




void solve() {
    ll n;
    cin >> n;
    vector<ll>v(n), a, b;
    take(v);
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) {
        ans += abs(v[i]);
        a.push_back(abs(v[i]));
        }
        else {
        ans += -1 * abs(v[i]);
        b.push_back(abs(v[i]));
        }
    }
    if (minv(a) < maxv(b))
        ans = ans + 2 * (maxv(b) - minv(a));
    cout << ans;
}
int main() {

    int tt; 
    cin >> tt; 
    while(tt--){
        solve();
        cout <<endl; 
    }
}