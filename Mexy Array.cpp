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
#define f(i,a,b) for(long long i=a;i<b;i++) 
#define rf(i,a,b) for(long long i=a;i>=b;i--) 
#define ll long long 
#define mp make_pair 
#define pb push_back 
#define vll vector<long long> 
#define vvl vector<vll> 
#define pll pair<ll,ll> 
#define vc vector 
#define fi first 
#define se second 
// typedef long long ll;
using namespace std;
int main(){
    Fast
    int T; 
    cin>>T; 
    while(T--) 
    { 
        ll n; 
        cin>>n; 
        vll b(n); 
        f(i,0,n) 
        cin>>b[i]; 
        ll maxi=0; 
        bool can=true; 
        f(i,0,n) 
        { 
            if(b[i]!=-1) 
            { 
                if(maxi>b[i] or b[i]>i+1) 
                { 
                    can=false; 
                    break; 
                } 
                maxi=max(b[i],maxi); 
            }   
        } 
        map<ll,bool> used; 
        if(can) 
        { 
        vll ans(n,-1); 
        if(b[n-1]!=-1) 
            used[b[n-1]]=1; 
            rf(i,n-1,1) 
            if(b[i-1]!=-1) 
            { 
                if(!used[b[i-1]]) 
                { 
                    used[b[i-1]]=1; 
                    ans[i]=b[i-1]; 
                } 
            } 
            ll start=0; 
            f(i,0,n) 
            if(ans[i]==-1) 
            { 
                while(used[start]) 
                start++; 
                ans[i]=start++; 
            } 
            f(i,0,n) 
            cout<<ans[i]<<" "; 
            cout<<endl; 
        } 
        else 
        cout<<-1<<endl; 
    } 
    return 0;
}