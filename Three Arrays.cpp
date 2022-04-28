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
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n],c[n];
        vector<int> a(n),b(n),c(n);
        bool check(n);
        for(int i=0 ; i<n ; i++){
            check[i]=false;
        }
        for(int i=0 ; i<n ; i++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        } 
        for(int i=0 ; i<n ; i++){
            int temp;
            cin >> temp;
            b.push_back(temp);
        }
        for(int i=0 ; i<n ; i++){
            int temp;
            cin >> temp;
            c.push_back(temp);
        }   
        int k1,k2;
        cin >> k1>>k2;
        while(n!=0){
            findmax
        }
    }
    return 0;
}