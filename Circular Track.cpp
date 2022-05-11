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
        int a,b,m;
        cin >> a >> b >> m;
        int sum = a+m;
        int dif = abs(a-b);
        int dif2 = abs(sum-b);
        // if(dif<=dif2)cout<<dif<<endl;
        // else cout<<dif2<<endl;
        if(a>b){
            cout<<min(dif,m-a+b)<<endl;
        }
        else cout<<min(dif,a+m-b)<<endl;

    }
    return 0;
}

//     if(a>b) {
//         cout<<min(a-b,m-a+b)<<endl;
//     }
//     else {
//         cout<<min(b-a,a+m-b)<<endl;
//     }