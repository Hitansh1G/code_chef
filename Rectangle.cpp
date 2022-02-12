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
using namespace std;
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b&&c==d)
        cout<<"YES"<<endl;
        
        else if(a==c&&b==d)
        cout<<"YES"<<endl;
        
        else if(a==d&&b==c)
        cout<<"YES"<<endl;
        
        else 
        cout<<"NO"<<endl;
        
    }
    return 0;
}