#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<unordered_map>
#include<unordered_set>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define ll long long
//--------------------------------------------------------------------------------------------------------------------------------------//
const int mod = 1e9 + 7;

int main()
{  
   Fast
   int T;
   cin>>T;
   while(T--){
        ll n;
        cin>>n;
        if((n&1) and n>=5){ 
            f(i,0,n-5)
            cout<<((i&1)?i:i+2)<<" ";
            cout<<n-3<<" "<<n-2<<" "<<n<<" "<<n-4<<" "<<n-1<<endl;
        }
        else if(n%2==0){
            rf(i,n,1)
            cout<<i<<" ";
            cout<<endl;
        } 
        else
            cout<<-1<<endl;
   }
   
    return 0;
}