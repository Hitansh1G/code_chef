#include<iostream>

using namespace std;

int main(){
   int n,k,a = 0;
   cin>>n>>k;
   for(int i=0;i<n;i++){
        int t;
        cin>>t;
   if ( t % k == 0){
    a++;
   }
   
   
   }
   cout<<a;
 return 0;

 }
