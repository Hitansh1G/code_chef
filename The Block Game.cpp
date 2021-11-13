#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        int rev=n;
        while(rev>0){
            sum=sum*10+rev%10;
            rev/=10;
            
        }
      
        if(n==sum)cout<<"wins"<<endl;
        else cout<<"loses"<<endl;
    }
	// your code goes here
	return 0;
}