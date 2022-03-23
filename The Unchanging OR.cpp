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
        int f=1,sum=0;
        int l = (int)log2(n);
        int ans=0;
        for(int i=1 ; i<l ; i++){
            sum += f;
            f *= 2;
            ans += sum;
        }
        ans += (n-(int)pow(2,l));
        cout<<ans<<endl;
    }
    return 0;
}