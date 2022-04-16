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
        ll n,number,ans=0 ,temp=0 ,seen=0;
        cin >> n;
        // int arr[n];
        // for(int i=0 ; i<n ; i++){
        //     cin >> arr[i];
        // }
        // int count=0;
        // for(int i=0 ; i<n-1 ; i++){
        //     for(int j=i+1 ; j<n ; j++){
        //         if(i<j && arr[i]+arr[j] >= arr[i]*arr[j])count++;
        //     }
        // }
        // cout<<count<<endl;
        vector<int>v;
        while(n--){
            int x;
            cin >> x;
            v.push_back(x);
            if(x==2)temp++;
            if(x==1)seen++;
        }
        for(int i=0 ; i<v.size(); i++){
            if(v[i]==1){
                ans+=v.size()-(i+1);
                seen--;
            }
            else{
                ans+=seen;
            }
        }
        temp--;
        cout<<ans+(temp*(temp+1)/2)<<endl;
    }
    return 0;
}