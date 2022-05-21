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
bool myfunction (int i,int j) {
    return (i<j); 
    }  
bool pred(int i, int j){
    if (i > j) {
        return 1;
    } else {
        return 0;
    }
}
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp[32] = {};
        for(int i=0 ; i<n ; i++) {
            int x,j=0;
            cin >> x;
            while(x!=0){
                if(temp[j]==0) temp[j] = x%2;
                x /= 2;
                j++;
            }
        }
        int sol=0;
        int i=0;
        while(i<32){
            sol += temp[i];
            i++;
        }
        cout<<sol<<endl;

    //     for(int i=0 ; i<n ; i++){
    //         int a = arr[i];
    //         int j=0;

    //        if(flag[i]==0) flag[j]=a%2;
    //          a /= 2;
    //          j++;
    //         
    //     }
    //     int sol=0;
    //     for(int i=0 ; i<32 ; i++){
    //         sol += flag[i];
    //     }
    //     cout<<sol<<endl;
    }
    return 0;
}
