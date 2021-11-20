#include<iostream>
#include<string>
#include<algorithm>
#include <iomanip> 
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
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        float q, p;
        cin >> q >> p;
        if(q>1000)cout << fixed << setprecision(6) << 0.9*(p*q) << endl;
        else cout << fixed << setprecision(6) << p*q << endl;
    }  
    return 0;
}