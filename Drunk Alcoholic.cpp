#include<iostream>
using namespace std;
int main(){
    int n ,k;
    cin >> n;
    for( int i = 0 ; i < n ; i++){
        cin >> k;
        if(k%2==0){
            cout << k <<endl;
        }
        else{
            cout << k+2 <<endl;
        }
    } 
    
    return 0;
}