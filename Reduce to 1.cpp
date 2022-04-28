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
bool isPerfectSquare(long double x){
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
void solve(){
    int n,count=0;
    cin >> n;
    if(n==0){
        cout<<-1<<endl;
        return;
    } 
    else if(n==1){
        cout<<0<<endl;
        return;
    }
    else if(n%2==1){
        cout<<1<<endl;
        return;
    }
    else{
        // if(isPerfectSquare(n)==true)cout<<1<<endl;
        // else if(isPerfectSquare(n/2)==true)cout<<2<<endl;
        // else{
        //     cout<<-1<<endl;
        // }
        if(n&1){
            cout<<1<<endl;
        }
        while(!(n & 1)){
            count++;
            n>>=1;
        }
        if(count%2==0)cout<<-1<<endl;
        else{
            if(n==1)cout<<1<<endl;
            else cout<<2<<endl;
        }
    } 
    // cout<<-1<<endl;
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