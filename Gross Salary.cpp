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
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double bs,ans;
        cin>>bs;
        if(bs>=1500)
        {
            ans=bs+500+(bs*0.98);
        }
        else
        {
            ans=2*bs;
        }
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
}