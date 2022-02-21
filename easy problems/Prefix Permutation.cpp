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

void solve(){
    // int n,k;
    // cin >> n >> k;
    // int arr[k];
    // // vector<i;nt> sol;
    // sort(arr,arr + k);
    // vector<int>vec;
    // int prev=0;
    // for(int j=0 ; j<k ; j++){
    //     for(int l=arr[j] ; l>prev ; l--){
    //         vec.push_back(l);
    //     }
    // }
    // for(auto it){
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;

    // for(int i=1 ; i<=n ; i++){
    //     sol[i-1]=i;
    // }
    // for(int i=0 ; i)
    // // do {
    // //     for(int i=0 ; i<k ; i++){
    // //         if(check(arr[i],sol)==true){
    // //             //
    // //         }
    // //         else continue;
    // //     }
    // // } while (next_permutation(sol.begin() , sol.end()));
    // // for(int i=0 ; i<k ; i++){
    // //     for(int j=arr[i] ; i>0 ; i--){
    // //         sol.push_back(j);
    // //     }
    // // }
    // // vector<int>::iterator ip;
    // // ip=unique(sol.begin(),sol.begin()+sol.size());
    // // sol.resize(distance(sol.begin(), ip));
    // // for (ip = sol.begin() ; ip!=sol.end() ; ++ip) {
    // //     cout << *ip << " ";
    // // }
    // for(int i=0 ; i<n ; i++){
    //     cout<<sol[i]<<" ";
    // }
     int n, k;
    cin >> n >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + k);
    vector<int> vec;
    int prev = 0;
    for (int j = 0; j < k; j++)
    {
        for (int l = arr[j]; l > prev; l--)
        {
            vec.push_back(l);
        }
        prev = arr[j];
    }
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        solve();    
    }
    return 0;
}