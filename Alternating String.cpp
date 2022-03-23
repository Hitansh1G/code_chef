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
        int n,zero=0,ones=0;
        string s;
        cin >> n >> s;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='0')zero++;
            else ones++;
        }
        int minimum = min(ones,zero);
        if(ones==zero) cout<<ones+zero<<endl;
        else cout<<2*minimum+1<<endl;
    }
    return 0;
}