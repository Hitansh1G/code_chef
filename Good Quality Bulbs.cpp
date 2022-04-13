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
        int n,x;
        cin >> n >> x;
        int arr[n-1],sum=0;
        for(int i=0 ; i<n-1; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        int y=(x*n)-sum;
        if(y>=0)cout<<y<<endl;
        else cout<<0<<endl;
    }
    return 0;
}