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
        int x,y;
        cin >> x >> y;
        // cout<<(500-(x*2) + 1000-(*4))<<endl;
        int flag = (500-(x*2) + 1000-((y+x)*4));
        int temp = 1000-(y*4) + 500-((x+y)*2);
        cout<<max(flag,temp)<<endl;

    }
    return 0;
}