#include<iostream>
#include<string>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int count=0;
        while(n>0)
        {
            
            if(n%10==4)
            count++;
            n=n/10;

            
        }
        cout<<count<<endl;
    }
return 0;
}