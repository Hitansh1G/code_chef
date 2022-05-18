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
const int E = 1e9 + 7;
using namespace std;
string unique(string s)
{
    string str;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        char c = s[i];
        auto found = str.find(c);
        if (found == std::string::npos)
        {
            str += c;
        }
    }
    return str;
}
int main(){
    Fast
    int t;
    cin >> t;
    set<char> sol;
    sol.insert('c');
    sol.insert('g');
    sol.insert('l');
    sol.insert('r');
    while(t--){

        int n;
        cin >> n;
        string str;
        cin >> str;
        int sum=0;
        ll ans = 1;
        for (char ch : str){
            if (sol.find(ch) != sol.end()){
                ans = (ans * 2) % E;
            }
        }
        cout << ans <<endl;
    }
        // if(s="aeiou") cout<<1<<endl;
        // else{
            // string str=unique(s);
            // for(int i=0 ; i<n ; i++){
            //     if(str[i]=='c'|| str[i]=='g' || str[i]=='l' || str[i]=='r'){
            //         sum += 2;
            //     }
            // }
            // if(sum==0)cout<<1<<endl;
            // else cout<<sum<<endl;
        // }
    return 0;
    }

//c mei 2 
//h mei 2
//l,r