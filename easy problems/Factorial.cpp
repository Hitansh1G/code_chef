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

int check(ll fac, ll count){
    // int n=fac.size();
    int temp = fac%10;
    if(temp !=0 ){
        return count;
    }
    return check( fac/10 , count+1);
}

unsigned int factorial(ll n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main(){
    Fast
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int k,a=0;
        cin>>k;
        while(k>0){
            a+=(int)(k/5);
            k=(int)(k/5);
        }
        cout<<a<<endl;
    }
	return 0;
}