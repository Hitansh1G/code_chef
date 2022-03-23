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
    while (t--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<ll>bit(33, 0);
        for (ll i = 0; i < n; i++) {
            bit[log2(v[i]) + 1]++;
        }
        ll ans = 0;
        for (ll i = 0; i < 33; i++) {
            ans += ((bit[i]) * (bit[i] - 1)) / 2;
        }
        cout << ans << endl;
    }
            
    return 0;
}