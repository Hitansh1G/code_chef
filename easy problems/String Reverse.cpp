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
// typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin >> s;
    string temp = s;
    reverse(s.begin(), s.end());
    int m = s.length(), num = temp.length();
    int glag[256];
    memset(glag, 0, sizeof(glag));
    for (int i = 0; i < num; i++)
        glag[temp[i]]++;
    for (int i = 0; i < num; i++)
        glag[s[i]]--;
    int ans = 0;
    for (int i = num - 1, j = num - 1; i >= 0;){
        while (i >= 0 && s[i] != temp[j]){
            i--;
            ans++;
        }
        if (i >= 0){
            i--;
            j--;
        }
    }
    cout << ans << "\n";
}

int main()
{
    // your code goes here
    long long  test;
    cin >> test;

    for (long long i = 0; i < test; i++){
        solve();
    }
    return 0;
}