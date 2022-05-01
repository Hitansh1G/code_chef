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
        int n;
        cin >> n;
        // int arr[n];
        vector<int>sol;
        bool flag=true;
        for(int i=0 ; i<n ; i++){
            int x;
            cin >> x;
            sol.push_back(x);
        }
        sort(sol.begin(),sol.end());
        for(int i=1 ; i<n-1 ; i++){
            int temp = (sol[i]-sol[i-1]);
            int bomb = (sol[i+1]-sol[i]);
            // sol.push_back(temp);
            if(temp!=2*bomb && 2*temp != bomb){
                flag=false;
                break;
            }
        }
        if(flag == true )cout<<"YES"<<endl;
        else cout<< "NO"<<endl;
    }
    return 0;
}