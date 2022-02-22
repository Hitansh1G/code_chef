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

// int countDigit(ll n){
//     if (n/10 == 0)
//         return 1;
//     return 1 + countDigit(n / 10);
// }

int main(){
    Fast
    ll a,b;
    cin >> a>>b;
    int original = a-b,fake;
    // int digits = countDigit(original);
    // if(digits==1){
    //     if(original=9) fake=original-1;
    //     else fake = original+1;
    // }

    int temp = original%10;
    if(temp ==9){
        cout<<original-1<<endl;
    }
    else cout<<original+1<<endl;
    return 0;
}