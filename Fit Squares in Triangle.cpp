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
using namespace std;
int main(){
    int t,b,sum;
    cin >> t;
    while(t--){
        cin >> b;
        sum = 0;
        int s = (b/2)-1;
        for(int i=s ; i>0 ; i--){
            sum += i;
        }
        cout << sum <<"\n";
    }
    return 0;
}