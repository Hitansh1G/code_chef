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
    int t,n,i,flag;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        flag=1;
        for(i=0;i<n;i++){
            if(s[i]=='N') continue;
            else{
                flag=0;
                if(s[i]=='I'){
                    cout<<"INDIAN"<<endl;
                    break;
                }
                else if(s[i]=='Y'){
                    cout<<"NOT INDIAN"<<endl;
                    break;
                }
            }
        }
        if(flag==1)
        cout<<"NOT SURE"<<endl;
        
    }
	return 0;
}
