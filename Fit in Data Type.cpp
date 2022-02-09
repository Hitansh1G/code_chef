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
        int n,x;
        cin >> n >> x;
        if(x<=n){
            cout<<x<<endl;
        }
        else{
            while(x>n)
                x=x-n-1;
            cout<<x<<endl;
            

        }
        
    }
    return 0;
}