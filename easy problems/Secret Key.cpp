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

int isSubstring(string s1, string s2){
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
        if (j == M)
            return 1;
    }
    return 0;
}

int main(){
    Fast
    string str1;
    cin >> str1;
    int n,count=0;
    cin >> n;
    while(n--){
        string str2;
        cin >> str2;
        int temp = isSubstring(str1,str2);
        if(temp == 1 ){
            count++;
        }
    }
    cout<<count;
    return 0;
}