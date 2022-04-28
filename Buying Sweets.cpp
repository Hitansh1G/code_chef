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
    int t,i;
    cin >> t;
    while(t--){
        int n,r;
        cin >> n >> r;
        int cost[n],cashback[n];
        // int temp = INT_MAX,index;

        for(int i=0 ; i<n ; i++){
            cin >> cost[i];
            // if(cost[i]<temp){
            //     temp = cost[i];
            //     index=i;
            // }
        }
        for(int i=0 ; i<r ; i++){
            cin >> cashback[i];
        }
        // int networth[n];
        // // vector<int>networth;
        // for(int i=0 ; i<n ; i++){
        //     networth[i]=cost[i]-cashback[i];
        // }
        vector<pair<int,pair<int,int> > >v;
        for(inti=0 ; i<n ; i++){
            v.push_back({cost[i]-cashback[i],{cost[i],cashback[i]}});
        }
        sort(v.begin(),v.end());
        ll x=0;
        for(int i=0 ; i<n ; i++){
            if(cashback[i]==v[0].second.second)x=i;
        }
        ll c=0;
        while(k>=a[x]){
            c++ ; 
            
        }
    }
    return 0;
}