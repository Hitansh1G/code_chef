#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll num;
	    cin>>num;
	    if(num == 1)
	        cout<<"no";
	    else if(num == 2 || num == 3)
	        cout<<"yes";
	    else{
	        ll tmp = num/2,cnt = 0;
	        for(ll i = 2;i<=tmp;i++){
	            if(num%i == 0){
	                cnt++;
	                break;
	            }
	        }
	        if(cnt == 0)
	            cout<<"yes";
	        else
	            cout<<"no";
	    }
	    cout<<endl;
	}
	return 0;
}
