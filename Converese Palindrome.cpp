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

string isPalindrome(string S){
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}

int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='a')s[i]='z';
            if(s[i]=='b')s[i]='y';
            if(s[i]=='c')s[i]='x';
            if(s[i]=='d')s[i]='w';
            if(s[i]=='e')s[i]='v';
            if(s[i]=='f')s[i]='u';
            if(s[i]=='g')s[i]='t';
            if(s[i]=='h')s[i]='s';
            if(s[i]=='i')s[i]='r';
            if(s[i]=='j')s[i]='q';
            if(s[i]=='k')s[i]='p';
            if(s[i]=='l')s[i]='o';
            if(s[i]=='m')s[i]='n';
            // if(s[i]==a)
            // if(s[i]==a)
            // if(s[i]==a)
            // if(s[i]==a)
            // if(s[i]==a)
            // cout<<s<<endl;
          }
        cout<<isPalindrome(s)<<endl;
    }
    return 0;
}