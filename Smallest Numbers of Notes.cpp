#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    int n100 , n50 , n10 , n5 , n2 , n1;
	    while(N){
	        n100=N/100;
	        N=N%100;
	        n50=N/50;
	        N=N%50;
	        n10=N/10;
	        N=N%10;
	        n5=N/5;
	        N=N%5;
	        n2=N/2;
	        N=N%2;
	        n1=N/1;
	        N=N%1;
	    }
	    cout<<n100+n50+n10+n5+n2+n1<<endl;
	}
	return 0;
}
