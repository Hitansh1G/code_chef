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

bool isPalindrome(string S){
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void findNonPalinString(string s)
{
    char tmp;
    for (unsigned i = 0; i < s.length() - 1; i++) {
        if (s[i] != s[i+1]) { 
            tmp = s[i];
            s[i] = s[i+1];
            s[i+1] = tmp;
            cout << s << '\n';
            return;
        }
    }
    cout << -1 << '\n';
    
}


int main(){
    Fast
    int t,size;
    string str;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        cin >> size;
        cin >> str;
        if(isPalindrome(str)==true){
            findNonPalinString(str);
        }
        if(isPalindrome(str)==false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}