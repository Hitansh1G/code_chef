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
    cin>> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int onlygym=x;
        int gymtrainer=x+y;
        // if(z>=gymtrainer)cout<<2<<endl;
        // else if(z<gymtrainer && z>x)cout<<1<<endl;
        // else cout<<0<<endl;
        if(x<z && z<x+y) cout<< 1 << endl;
        else if(x+y<=z)cout<<2<<endl;
        else cout<<0<<endl;

    }
    return 0;
}