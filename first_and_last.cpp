#include<iostream>
using namespace std;
int main(){
    int testcase, n , ld , fd , sum ;
    cin >> testcase;
    for(int i=0; i<testcase ; i++){
        cin >> n;
        ld = n % 10;
        while(n!=0){
            fd = n % 10;
            n=n/10;

        }
        sum = ld + fd ;
        cout << sum;

    }
    return 0;
}