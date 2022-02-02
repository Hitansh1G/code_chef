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

int firstHacked(int a ,int b, int c , int p , int q, int r){
    int sum = p + b + c;
    return sum;
}
int secondHacked(int a ,int b, int c , int p , int q, int r){
    int sum = q + a + c;
    return sum;
}
int thirdHacked(int a ,int b, int c , int p , int q, int r){
    int sum = r + a + b;
    return sum;
}
int main(){
    Fast
    int t,a,b,c,p,q,r;
    cin >> t;
    
    for(int i=0 ; i<t ; i++){
        cin>>a>>b>>c>>p>>q>>r;
        int sum1 = firstHacked(a,b,c,p,q,r);
        int sum2 = secondHacked(a,b,c,p,q,r);
        int sum3 = thirdHacked(a,b,c,p,q,r);
        vector<int>ans;
        ans.push_back(sum1);
        ans.push_back(sum2);
        ans.push_back(sum3);
        float totalVotes=p+q+r;
        int gainedVotes=*max_element(ans.begin(),ans.end());
        if(totalVotes/2<gainedVotes){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
        
    return 0;
}