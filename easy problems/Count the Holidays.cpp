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
    ll t,num;
    cin>>t;
    while(t--){
        cin>>num;
        unordered_set<ll>val;
        int temp;
        val.insert({6,7,13,14,20,21,27,28});
        for(int i=0;i<num;i++){
            cin>>temp;
            val.insert(temp);
        }
        cout<<val.size()<<endl;
    }
    return 0;
}