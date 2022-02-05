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
        int n,k,i,acount=0,count=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for( i=0 ; i<n/2 ; i++){
            if(s[i]!=s[n-i-1]){
                count +=1;
            }
        }
        if(k>=count){
            if((k-count)%2==0) cout<<"YES"<<endl;
            else if(n%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}