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
        int x;
        cin >> x;
        if(x%5!=0){
            cout<<-1<<endl;
        }
        else{
            int p = x/10;
            if(x%10!=0)cout<<p+1<<endl;
            else cout<<p<<endl;
        }
    }
    return 0;
}