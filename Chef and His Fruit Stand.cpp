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
        int x,y;
        cin>>x>>y;
        int b = x/2;
        if(y>=b){
            cout<<b<<endl;
        }
        else cout<<y<<endl;
    }

    
    return 0;
}