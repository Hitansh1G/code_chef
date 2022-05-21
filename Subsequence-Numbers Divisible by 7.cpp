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
//to concatinate array
// void combineArray(vector<long long> lis){
//     string st = "";
//     for (long long el : lis){
//         string ee = to_string(el);
//         st = st + ee;
//     }
//     // checkUnique(st);
// }

//to find no of subsets
// int findNoOfSubsets(int *A, int N, int i, int sum, int count){
//     if(i == N){
//         if(sum == 0){
//             count++;
//         }
//         return count;
//     }
//     count = findNoOfSubsets(A, N, i + 1, sum - A[i], count);
//     count = findNoOfSubsets(A, N, i + 1, sum , count);
//     return count;
// }

int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        ll ans = (ll)n*(n+1)/2;
        vector<vector<int> >inds(n+1,vector<int>(1,-1));
        for(int i=0 ; i<n ; i++){
            int x;
            cin >> x;
            inds[x].push_back(i);
        }
        for(int i=1 ; i<=n ; i++){
            inds[i].push_back(n);
            for(int j=1 ; j<(int)inds[i].size() ; j++){
                int l = inds[i][j]-inds[i][j-1]-1;
                ans -= max(INT_MIN,(l-i+1));
            }
        }
        cout<<ans<<endl;
        

    }
    return 0;
}
