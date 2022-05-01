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
        int x,y;
        cin >> x >> y;
        int des = x*100;
        int clo = y*10;
        if(des>=clo)cout<<"Cloth"<<endl;
        else cout<< "Disposable"<<endl;
    }
    return 0;
}