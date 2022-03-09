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
const ll INF=1e9+7;
using namespace std;
void solve(){
    ll n,m;
    cin >> n >> m;
    vector<ll>A(n);
    for(int i=0 ; i<n ; i++) cin >> A[i];
    while(m--){
        ll c,x;
        cin >> c >> x;
        vector<ll>u(2*x);
        for(int i=0 ; i<2*x ; i++)cin >> u[i];
        ll temp = A[c-1];
        A[c-1]=0;
        for(int i=0 ; i<u.size()-1 ; i+=2){
            A[u[i+1]-1]=(A[u[i+1]-1]+temp*u[i])%INF;
        }
    }
    for(auto x:A)cout<<x<<endl;
}
int main(){
    Fast
    solve();
    return 0;
}