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



int main(){
    Fast
    int n;
    n=1;
    while(n!=0){
        cin>>n;
        int a[n];
        if(n>0){
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int b[n];
        for(int i=1;i<=n;i++){
            b[a[i]]=i;
        }
        int flag=0;
        for(int i=1;i<=n;i++){
            if(a[i]==b[i]){
                flag++;
            }
        }
        if(flag==n){
            cout<<"ambiguous"<<endl;
        }
        else{
            cout<<"not ambiguous"<<endl;
        }
        }
        else{
            break;
        }
    }
    
    return 0;
}