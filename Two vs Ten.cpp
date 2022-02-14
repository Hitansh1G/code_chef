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
typedef long long ll;
using namespace std;

// int divisible(int x,int count){
//     if(x%10==0){
//         return count;
//     }
//     if(count ==10){
//         return -1;
//     }
//     return divisible(x*2 , count+1);
// }

int main(){
    Fast
    int t,x;
    cin >> t;
    while(t--){
        ll x;
	 cin>>x;
	 int z=0;
	 if(x%5==0 ||x%10==0){
	     while(x%10!=0){
	        z++;
	         x=x*2;
	     }
	     cout<<z<<"\n";
	 }
	 else cout<<"-1\n";
    }
	return 0;
}