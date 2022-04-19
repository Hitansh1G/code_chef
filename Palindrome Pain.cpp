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
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x>>y;
        int mini = x/2;
        int maxi = y/2;
        // if(x%2==1 || y%2==1){
        //     cout<<-1<<endl;
        // }
        // else{
        //     int n = x+y;
        //     string s1,s2;
        //     vector<string>s1,s2;
        //     int mini = min(x,y);
        //     //for s1
        //     for(int i=0 ; i<mini ; i++){
        //         s1[i]="a";
        //         s1[n-i]="a";
        //     }

        // }
        if(x%2==0 && y%2==0){
            
            for(int i=0 ; i<mini ; i++)cout<<'a';
            for(int i=0 ; i<y ; i++)cout<<'b';
            for(int i=0 ; i<mini ; i++)cout<<'a';
            cout<<endl;
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            for(int i=0 ; i<x ; i++)cout<<'a';
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            cout<<endl;
        }
        else if(x%2==0){

            for(int i=0 ; i<mini ; i++)cout<<'a';
            for(int i=0 ; i<y ; i++)cout<<'b';
            for(int i=0 ; i<mini ; i++)cout<<'a';
            cout<<endl;
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            for(int i=0 ; i<mini ; i++)cout<<'a';
            cout<<'b';
            for(int i=0 ; i<mini ; i++)cout<<'a';
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            cout<<endl;
        }
        else if(y%2==0){
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            for(int i=0 ; i<x ; i++)cout<<'a';
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            cout<<endl;
            for(int i=0 ; i<mini ; i++)cout<<'a';
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            cout<<'a';
            for(int i=0 ; i<maxi ; i++)cout<<'b';
            for(int i=0 ; i<mini ; i++)cout<<'a';
            cout<<endl;
        }
        else cout<<-1<<endl;
        
    }
    return 0;
}