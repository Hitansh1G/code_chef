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
        int n,m,l;
        cin >> n >> m >> l;
        if(n==0) cout<< m<<endl;
        //t=m%(l+n-1)
        // if(t<l): print(t)
        // Else: print(0)
        else{
            int temp = m%(l+n-1);
            if(t<l) cout<< temp<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}