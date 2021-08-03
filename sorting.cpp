
#include<iostream>
using namespace std;
 
int main()
{
        int i,num,arr[1000001]={0},n;
        cin >> num ;
        for(i=0;i<num;i++)
        {
               cin >> n;
               arr[n]++;
        }
        for(i=0;i<1000001;i++)
               if(arr[i])
                       while(arr[i]--)
                              
                               cout << i << endl;
        return 0;
}
 

