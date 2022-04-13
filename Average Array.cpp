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
        int n,x; 
        cin>>n>>x; 
        if(n==1){ 
            cout<<x<<endl; 
            return 0; 
        } 
        vector<int> a(n); 
        for(int i=0;i<n;i++){ 
            a[i]=x; 
        } 
        if(n&1){ 
            for(int i=n/2-1;i>=0;i--){ 
                a[i]=a[i+1]+1; 
            } 
            for(int i=n/2+1;i<n;i++){ 
                a[i]=a[i-1]-1; 
            } 
        } 
        else{ 
            for(int i=n/2-1;i>=0;i--){ 
                a[i]=a[i+1]+1; 
            } 
            a[n/2]=x-1; 
            for(int i=n/2+1;i<n;i++){ 
                a[i]=a[i-1]-1; 
            } 
        } 
        for(int i=0 ; i<n ; i++){ 
            cout<<a[i]<<" "; 
        } 
        cout<<endl; 
        }
    return 0;
}