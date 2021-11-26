#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
	    int len;
	    cin >> len;
	    int a[len];
	    for(int i = 0 ; i < len ; i++)
	    {
	        cin >> a[i];
	    }
	    sort(a,a+len);
	    cout <<(a[0] + a[1]) <<endl;
	}
	return 0;
}
