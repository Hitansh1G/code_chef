#include<iostream>
using namespace std;
int main(){
    int n , count1=0 , count2=0 ,a;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        if(a%2==0){
            count1++;
        }
        else 
            count2++;
    }
    if(count1>count2 ){
        cout<<"READY FOR BATTLE"<<endl;
        
    }
    else cout<<"NOT READY"<<endl;

    return 0;
}