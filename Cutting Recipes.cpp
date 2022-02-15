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

int factor (int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return factor(b,a%b);
    }
    else{
        return factor(a,b%a);
    }
}

int main(){
    Fast
    int t;
	cin>>t;
	for (int i=0;i<t;i++){
	    int n,ans;
	    cin>>n;
	    int a[n];
	    for ( int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ans=factor(a[0],a[1]);
	    for ( int i=2;i<n;i++)
	    {
	        ans=factor(ans,a[i]);
	    }
	    for ( int i=0;i<n;i++)
	    {
	        cout<<a[i]/ans<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}