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

// int main(){
//     Fast
//     int t;
//     cin >> t;
//     while(t--){
//         ll n;
//         cin >> n;
//         ll evencount=0 , temp=n , oddcount=0;
//         while(temp!=0){
//             ll lastdigit = temp%10;
//             if(lastdigit %2 ==0){
//                 evencount++;
//             }
//             else oddcount++;
//             temp/=10;
//         }
//         if(evencount>=2 && (n%10)%2==0) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;

//     }
//     return 0;
// }
void solve() {
    int i=0, j, n;
    string s;
    cin>>s;
    int cn1=0, cn2=0;
    while(s[i])
    { 
        if((s[i]-'0')%2==0) cn1++;
        else cn2++;
        i++;
    }

    
    if(((s[s.size()-1])-'0')&1)
    {
        if(cn2>=2)
        cout << "YES\n";
        else cout << "NO\n";
    }
    else{
        if(cn1>=2)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}