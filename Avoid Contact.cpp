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
    int t,a,b;
    cin >> t; 
    for(int i=0 ; i<t ; i++){
        cin >> a >> b;
        int n=0;
        if(b==0){
            cout<<a<<endl;
        }
        else if(a==0){
            cout<<0<<endl;
        }
        else if(a==b){
            cout<<2*b-1<<endl;
        }
        else{
            int healthy= a-b;
            n = healthy + 2*b;
            cout<<n<<endl; 
        }
    }
    return 0;
}