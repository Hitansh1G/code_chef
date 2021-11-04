#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a,b;
    cin >> n;
    for( int i = 0 ; i < n ; i++){
        int sum = 0;
        cin >> a >> b;
        sum = a+ b;
        if(a>b){
            cout<< a <<" "<<sum;
        }
        else{
            cout<< a <<" "<<sum;
        }

    }
    return 0;
}