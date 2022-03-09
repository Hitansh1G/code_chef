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
        int n,x,flag=0;
        cin >> n >> x;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        for(int i=n-1 ; i>=0 ; i--){
            if(arr[i]<x){
                // cout<<i<<endl;
                flag= i+1;
                break;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}