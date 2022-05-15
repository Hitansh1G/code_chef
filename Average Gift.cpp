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
        int n,x,sum=0;
        bool flag=false;
        cin >> n >> x;
        int s[n];
        for(int i=0 ; i<n ; i++){
            cin >>s[i];
        }
        for(int i=0 ; i<n ; i++){
            if(s[i]==x || s[i]==x/2){
                flag=true;
                break;
            }
        }
        for(int i=0 ; i<n ; i++){
            sum += s[i];
        }
        if(flag==true)cout<<"YES"<<endl;
        else if(sum/n==x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
    return 0;
}