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
        cin >> n ;
        int arr[n];
        vector<int>sol;
        // vector<int>::iterator it;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        // for (auto i = sol.begin(); i != sol.end(); ++i) {
        //     if(sol[i]==sol[i+1]){
        //         sol.erase[i];
        //     }
        // }
        int count=0;
        for(int i=0 ; i<n-1 ; i++){
            if(arr[i]==arr[i+1]){
                count++;
                // i+=1;
            }
        }
        cout<<n-count<<endl;
        // cout<<sol.size()<<endl;
    }
    return 0;
    }
