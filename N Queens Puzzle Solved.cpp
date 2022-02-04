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
        long int n;
        cin >> n;
        double x= pow(0.143*n,n);
        if((x-floor(x))<0.5){
            cout<<floor(x)<<endl;
        }
        else
            cout<<floor(x)+1<<endl;
    }
    return 0;
}