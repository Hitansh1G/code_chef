#include <iostream>
using namespace std;
int get_gcd(int a,int b)
{
    while( b%a != 0)
    {
        int tmp = a;
        a = b%a;
        b = tmp;
    }
    return a;
}


int main() {
long long int t,a,b;
	cin >> t;
	while(t--){
	    cin >> a >> b;
	    long long int gcd = get_gcd(a,b);
	    long long int lcm = (a*b)/gcd;
	    cout << gcd << " " << lcm << endl;
	    
	    
	    
	}
}