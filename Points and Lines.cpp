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
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n] , b[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i] >> b[i] ;
        }
        sort(a,a+n);
        sort(b,b+n);
        int result1=0;
        int result2=0;
        for(int i=0 ; i<n ; i++){
            while(i<n-1 && a[i]==a[i+1])
            i++;
            result1++;
        }
        for(int i=0 ; i<n ; i++){
            while(i<n-1 && b[i]==b[i+1])
            i++;
            result2++;
        }
        cout<<result1+result2<<endl;


    }
    return 0;
}