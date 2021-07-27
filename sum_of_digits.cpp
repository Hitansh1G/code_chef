#include<iostream>
using namespace std;
int main(){

    int testcase,q,n,sum=0;
    cout << " enter no of testcase : ";
    cin >> testcase;
    for(int i=0 ; i<testcase ; i++){
        cin >> n;
          int sum =0;
    while (n>0){
        sum+=n%10;
        n=n/10;
    }
    cout<<sum<<endl;
}
    return 0;

    
    }
   

    