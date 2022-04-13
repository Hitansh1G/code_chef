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
        ll k;
        cin >> k;
        ll zero=0,pos=0,neg=0;
        ll num;
        while(k--){
            cin >> num;
            if(num==0){

            }
            else if(num>0){
                pos++;
            }
            else neg++;

        }
        pos--;
        neg--;
        ll ans=0;
        if(pos>0)
        ans=((pos)*(pos+1)/2);
        if(neg>0)
        ans+=neg*(neg+1)/2;
        cout<<ans<<endl;
    }
    return 0;
}