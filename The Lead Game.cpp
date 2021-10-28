#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,winner,p1=0,p2=0,max=0;
	cin>>n;
	while(n--){
	    int a,b,lead;
	    cin>>a>>b;
	    p1=p1+a;
	    p2=p2+b;
	    if(p1>p2){
	        lead=p1-p2;
	         if(max<lead){
	            max=lead;
	            winner=1;
	         }
	    }
	    else if(p1<p2){
	        lead=p2-p1;
	         if(max<lead){
	             max=lead;
	             winner=2;
	         }
		}
	}	
	cout<<winner<<" "<<max;
	return 0;
}