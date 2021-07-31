#include<iostream>
using namespace std ;
int main (){
    int testcase ,a ;
    cin >> testcase;
    for ( int i =0 ; i < testcase; i++){
        long int fact =1;
        cin >> a;
        if (a==0){
            cout << "1";
        }
        else
        {
            for(int j=1 ; j <= a ; j++){
                fact = fact * j;
             
            }
            cout << fact << endl; 
        }
   }
    

return 0 ;

}
