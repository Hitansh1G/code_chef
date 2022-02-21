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
    int n, k;
    cin >> n >> k;
    vector<int> sol;
    for (int i = 1; i <= n; i++)
        sol.push_back(i);
    if (n == 1){
        cout << 1 << endl;
        return;
    }
    if (k == n - 1){
        swap(sol[0], sol[1]);
        for (auto e : sol){
            cout << e << " ";
        }
        cout << endl;return;
    }
    int sw = 0;
    k = n - k;
    while (k--){
        swap(sol[sw], sol[sw + 1]);
        sw++;
    }
    for (auto e : sol){
        cout << e << " ";
    }
    cout << endl;
}


int main(){
    Fast
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}