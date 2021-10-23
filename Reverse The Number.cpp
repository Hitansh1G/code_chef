#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int r , temp = 0;
        while( n != 0){
            r = n % 10;
            temp = temp * 10 + r ;
            n = n / 10;
        }
        cout << temp << endl;
    }
     
    return 0;
}