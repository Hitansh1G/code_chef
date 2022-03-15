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
    int n;
    cin >> n;
    vector<int>sol(n,0);
    // fill(sol.begin(), sol.end(), 0);

    for(int i=0 ; i<n-1 ; i++){
        int temp;
        cin >> temp;
        sol[temp]=1;
    }
    for(int i=1;i<=n;i++){
        if(sol[i]==0) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}