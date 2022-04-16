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
        if(x==0){
            cout<<"NORMAL"<<endl;
        }
        else if(x==1){
            cout<<"HUGE"<<endl;
        }
        else if(x==2){
            cout<<"SMALL"<<endl;
        }
        else if(x%3==0) cout<<"NORMAL"<<endl;
        else if(x%3==1) cout<<"HUGE"<<endl;
        else if(x%3==2) cout<<"SMALL"<<endl;
    }
    return 0;
}