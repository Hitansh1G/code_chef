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
    int count=0;
    for(int i=0 ; i<4 ; i++){
        int temp ;
        cin >> temp;
        if(temp>=10) count++;
    }
    cout<<count<<endl;
    return 0;
}