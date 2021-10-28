#include<iostream>
using namespace std;
int main(){
    long long int n,num,fact;
    cin >> n;
    for ( int i = 0 ; i < n ; i++){
        cin >> num;
        fact=1;
        for(int j = 1 ; j <=num ; j++){
            fact = fact*j;
        }
        cout << fact<<endl;
    }
    return 0;
}