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
        int x,y,z;
        cin >> x>>y>>z;
        // int m=y/x;
        // // cout<<abs(z-m)<<endl;
        // int diff=abs(z-m);
        // if(diff)
        int d=y/x;
        if(d>z) cout<<0<<endl;
        else cout<<abs(z-d)<<endl;
    }
    return 0;
}