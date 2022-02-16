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

bool all_equal(vector<int>v) {
    if (v.size() == 0) {
        return false;
    }
    return equal(v.begin() + 1, v.end(), v.begin());
}

int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        // int n,flag=0;
        // cin >> n;
        // int arr[2*n];
        // vector<int>temp;
        // for(int i=0 ; i<2*n ; i++){
        //     cin >>arr[i];
        // }
        // for(int i=0 ; i<2*n ; i=i+2){
        //     int diff =abs(arr[i]-arr[i+1]);
        //     temp.push_back(diff);
        // }
        // if(all_equal(temp)==true){
        //     cout<<"YES"<<endl;
        // }
        // else cout<<"NO"<<endl;
        // temp.clear();
        int n;
        cin >> n;
        int sum=0;
        int arr[n*2];
        for(int i=0 ; i<2*n ; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        (sum%2==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}