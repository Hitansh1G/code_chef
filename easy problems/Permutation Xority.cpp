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

void solve(){
    int n;
    cin >> n;
    int arr[n];
    if(n==2){
        cout<<-1<<endl;
        return;
    }
    if(n%2==1){
        int x=n;
        for(int i=0 ; i<n ; i++){
            cout<<x<<" ";
            x--;
        }
        cout<<endl;
        return;
    }
    int x=1;
    for(int i=0 ; i<n ; i++){
        arr[i]=x;
        x++;
    }
    arr[0]=2;
    arr[1]=3;
    arr[2]=1;
    for(int i=0 ; i<n ; i++) cout<< arr[i]<<" ";
    cout<<endl;

}

int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}