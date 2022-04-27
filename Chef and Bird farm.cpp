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
        int x,y,z;
        cin >> x>>y>>z;
        if(z%x==0 && z%y==0)cout<<"ANY"<<endl;
        else if(z%x==0 && z%y!=0)cout<<"CHICKEN"<<endl;
        else if(z%x!=0 && z%y==0)cout<<"DUCK"<<endl;
        else cout<<"NONE"<<endl;
    }
    return 0;
}