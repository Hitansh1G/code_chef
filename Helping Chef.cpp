#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin >> n;
    for(int i=0 ; i<n; i++){
        cin >> t;
        if(t<10){
            cout << "Thanks for helping Chef!"<<endl;
        }
        else{
            cout <<  "-1"<<endl;
        }
    }
    return 0;
}