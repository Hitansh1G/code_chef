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
const int MAX_CHAR = 26;
using namespace std;
bool lapindrome(string s){
    int count[MAX_CHAR] = {0};
    int n = s.length();
    if (n == 1)
        return true;
    for (int i=0 , j=n-1 ; i<j ; i++ , j--){
        count[s[i]-'a']++;
        count[s[j]-'a']--;
    }
    for (int i=0 ; i<MAX_CHAR ; i++)
        if (count[i] != 0)
            return false;
 
    return true;
}
int main(){
    int n;
    string str;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> str;
        if(lapindrome(str)==true)
            cout << "YES"<<endl;
        else 
            cout << "NO"<<endl;
    }
    return 0;
}