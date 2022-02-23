// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<map>
// #include<set>
// #include<list>
// #include<queue>
// #include<stack>
// #include<cstring>
// #include<cmath>
// #include<cstdlib>
// #include<unordered_map>
// #include<unordered_set>
// #define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
// typedef long long ll;
// using namespace std;
// // int check(int k ,int b, int c){
// //     if((k*b)%c==0){
// //         return k;
// //     }
// //     check(k+1,b,c);
// // }
// void solve(){
//     ll b,c,a;
//     cin >> b >> c;
//     // float temp = b/c;
//     // for(ll i=1 ; i<=c ; i++){
//     //     if((i*b)%c==0){
//     //         cout<<i<<endl;
//     //         break;
//     //     }
//     // }
//     int k=1;
//     int temp =check(k,b,c);
//     cout<<temp<<endl;
// }

// int main(){
//     Fast
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
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

ll gcd(ll a , ll b){
    return b==0?a:gcd(b,a%b);
}

int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        ll b ,c;
        cin >> b>>c;
        ll g= gcd(b,c);
        ll ans = c/g;
        cout<<ans<<endl;
    }
    return 0;
}