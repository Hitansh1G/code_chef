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
    cin>>t;
    while(t--){
        int n,x; 
        cin >> n >> x; 
        if(n==1){ 
            cout<<x<<endl; 
        } 
        else{
            int arr[n]; 
            for(int i=0;i<n;i++){ 
                arr[i]=x; 
            } 
            if(n&1){ 
                for(int i=n/2-1;i>=0;i--){ 
                    arr[i]=arr[i+1]+1; 
                } 
                for(int i=n/2+1;i<n;i++){ 
                    arr[i]=arr[i-1]-1; 
                } 
            } 
            else{ 
                arr[n/2]=x-1;
                arr[(n/2)-1]=x+1;
                for(int i=(n/2)-2;i>=0;i--){ 
                        arr[i]=arr[i+1]+1; 
                } 
                for(int i=(n/2)+1;i<n;i++){ 
                        arr[i]=arr[i-1]-1; 
                } 
            } 
            int i=0;
            while(i<n){ 
                cout<<arr[i]<<" ";
                i++;
            } 
            cout<<endl; 
        }
    }
    return 0;
}