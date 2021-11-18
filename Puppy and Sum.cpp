#include <iostream>
using namespace std;

int sum(int s){
    int sum=0;
    for(int i=1 ; i<=s ; i++){
        sum += i;
    }
    return sum;
}
int main() {
	int t;
	cin >> t;
	    while(t--){
	        int d , n;
	        cin >> d >> n;
	        int ans = n;
	        while(d--){
	            ans = sum(ans);
	        }
	        cout << ans << endl;
	    }
	return 0;
}
