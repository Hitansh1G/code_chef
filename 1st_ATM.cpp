#include<iomanip>
#include<iostream>
using namespace std ;
int main()

{
    int x,left,remainder;
    float y;
    float lamount;
    cin >> x;
    cin >> y;
    if (y >= x + 0.5) {
        if (x % 5 == 0){
            
            lamount = y - x - 0.5;
            cout <<fixed<<setprecision(2)<< lamount;
        }
        else
            cout <<fixed<<setprecision(2)<< y;
    
    }
    else{ 
        
        cout <<fixed<<setprecision(2)<< y;
    }

return 0;

}