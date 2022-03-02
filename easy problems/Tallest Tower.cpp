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
    int n;
    stack <ll> sol;
    cin >> n;
    while(n--){
        // solve();
        ll x,y;
        cin >> x>>y;
        ll area=x*y;
        
        if(sol.empty()==true){
            sol.push(area);
        }
        else{
            ll temp = sol.top();
            if(temp<area){
                continue;
            }
            else{
                sol.push(area);
            }
        }
    }
    cout<<sol.size();
    return 0;
}



