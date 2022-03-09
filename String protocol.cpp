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
        int n,count =0;
        cin >> n;
        string s;
        cin >> s;
        s[n]='0';
        for(int i=0 ; i<n ; i++){
            if(s[i]==s[i+1]){
                i++;
                count++;
            }
            else if(s[i]!=s[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}