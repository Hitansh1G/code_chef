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
#define ll long long int
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// vector<int>sum;

// bool normalSum(int x, float temp){
//     for(int i=0 ; i<sum.size() ; i++){
//         int normal += sum[i];
//     }
//     if(normal==x){
//         return 1;
//     } 
//     else return 0;         //gives me normal sum
// }

// bool reciprocalSum(int x, float temp){
//     for(int i=0 ; i<sum.size() ; i++){
//         float reciprocal += 1/sum[i];
//     }
//     if(reciprocal==temp){
//         return 1;
//     }
//     else return 0;
//             //gives me reciprocal sum
// }
// int divisors(int m){
//     for(int i=1 ; i<=m ; i++){
//         if(m%i==0){
//             sum.push_back(i);
//         }
//     }
// }

// int check(int x, float temp){ // yaha hme ek ek no ko check karana ha
//     for(int i=0 ; i<x i++){   // aur fir uske diviros ko store krana ha
//         sum.empty()
//         int b=divisors(i);
//     }
// }
int main(){
    Fast
    // int t,x,a,b;
    // cin >> t; 
    // for( int i=0 ; i<t ; i++){
    //     cin >> x >> a >> b;
    //     float temp = a/b;
    //     check(x,temp);

    // }
    int tt=1;
    cin>>tt;
    while(tt--){
        ll x,a,b;
        cin >>x>>a>>b;
        if(x%a==0){
            ll p=x/a;
            ll den= b*p;
            ll sum=0;
            for(int i=1 ; i<=sqrt(den) ; i++){
                if(sum>x) break;
                if(den%i==0){
                    sum = sum +i;
                    if(den/i != i)
                        sum = sum +den/i;
                }
            }
            if(sum!=x){
                cout<<-1 <<endl;
            }
            else
                cout<<den<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}