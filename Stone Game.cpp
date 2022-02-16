// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<map>
// #include<set>
// #include<list>
// #include<queue>
// #include<stack>
// #include<cstring>
// #include<cmath>
// #include<cstdlib>
// #include<unordered_map>
// #include<unordered_set>
// #define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
// typedef long long ll;
// using namespace std;

// // 

// int main(){
//     Fast
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<char>sol;
//         string str1,str2;
//         cin >> str1>>str2;
//         sort(str1.begin(),str1.end());
//         sort(str2.begin(),str2.end(),greater<char>());
//         for(int i=0 ; i<n ; i++){

//             sol.push_back(str1[i]);
//             sol.push_back(str2[i]);
//             // sol[i]=str1[i];
//             // sol[i+1]=str2[i];
//         }
//         for(int i=0 ; i<sol.size() ; i++){
//             cout<<sol[i];
//         }
//         cout<<endl;
//         sol.clear();
//     }
//     return 0;
// }
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

// void solve()
// {
//     int i;
//     ll n;cin >> n;
//     string s1, s2;cin >> s1 >> s2;
//     string res(2 * n, '0');
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     ll  tem = n - 1, bem = 0, b = n - 1,a = 0;
//     ll rst = 2 * n - 1, TIH = 0;
//     for (i = 0; i < 2 * n; i++)
//     {
//         if (b < bem){res[TIH] = s1[a];a += 1;TIH += 1;continue;}
//         if (a > tem){res[TIH] = s2[b];b -= 1;TIH += 1;continue;}
//         if (i % 2 == 0)
//         {
//             if (s1[a] < s2[b]){res[TIH] = s1[a];a += 1;TIH += 1;}
//             else{res[rst] = s1[tem];rst -= 1;tem -= 1;}
//         }
//         else
//         {
//             if (s2[b] > s1[a]){res[TIH] = s2[b];TIH += 1;b -= 1;}
//             else
//             {res[rst] = s2[bem];rst -= 1;bem += 1;}
//         }
//     }cout << res << "\n";
// }


int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int i;
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        string res(2 * n, '0');
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        ll  flag = n - 1, temp = 0, b = n - 1,a = 0;
        ll pol = 2 * n - 1, TIH = 0;
        for (i = 0; i < 2 * n; i++){
            if (b < temp){
                res[TIH] = s1[a];
                a += 1;TIH += 1;
                continue;
            }
            if (a > flag){
                res[TIH] = s2[b];
                b -= 1;
                TIH += 1;
                continue;
            }
            if (i % 2 == 0){
                if (s1[a] < s2[b]){
                    res[TIH] = s1[a];
                    a += 1;
                    TIH += 1;
                }
                else{
                    res[pol] = s1[flag];
                    pol -= 1;
                    flag -= 1;}
            }
            else{
                if (s2[b] > s1[a]){
                    res[TIH] = s2[b];
                    TIH += 1;
                    b -= 1;
                }
                else{
                    res[pol] = s2[temp];
                    pol -= 1;
                    temp += 1;
                }
            }
        }cout << res << endl;
    }
    return 0;
}