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
        int n,x,money=0;
        cin >> n >> x;
        // while(n!=0){
        //     /*
        //     2 pro = x rupee
        //     3 pro = x 
        //     1 pro = x/3
        //     n pro = nx/3
        //     */
        // }
        // cout << (n*x)/3<<endl;
        int n1=n/3;
        n=n-n1;
        cout<<n*x<<endl;
    }
    return 0;
}