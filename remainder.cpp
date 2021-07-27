#include<iostream>
using namespace std;
int main (){
    int testcase,n,m, rem;
    cin >> testcase;
    for(int i =0 ; i < testcase; i++){
    cin >> n;
    cin >> m;

    rem=n%m;
    cout << rem << endl ;
    }

    return 0;
}