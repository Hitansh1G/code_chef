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
#include<climits>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
int main(){
    Fast
    int t,n,k;
    cin >> t;
    while(t--){
        int n,k;
	    cin>>n>>k;
	    int temp=INT_MIN;
	    for(int i=1 ; i<=k ; i++){
	        temp=max(temp,(n%i));
	    }
	    cout << temp << endl;
    }
    return 0;
}