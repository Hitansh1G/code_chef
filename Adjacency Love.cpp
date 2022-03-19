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
void solve(){
    int n;
    cin >> n;
    vector<int>v(n), e, o;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 1) {
            o.push_back(v[i]);
        }
        else {
            e.push_back(v[i]);
        }
    }
    if ((e.size() == 0 && (o.size()) % 2 == 1) || o.size() < 2) {
        cout << -1<<endl;
        return;
    }
    else {
        if ((o.size()) % 2 == 1) {
        cout << o[0] << " ";
        for (int i = 0; i < e.size(); i++) {
            cout << e[i] << " ";
        }
        for (int i = 1; i < o.size(); i++) {
            cout << o[i] << " ";
        }
    }
    else {
        for (int i = 0; i < e.size(); i++) {
            cout << e[i] << " ";
        }
        for (int i = 0; i < o.size(); i++) {
            cout << o[i] << " ";
        }
    }
    cout<<endl;
  }
  
}
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}