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
    long long t,temp;
    cin >> t;

    for(int i=0 ; i<t ; i++){
        cin >> temp;
        // score.push_back(temp);
        if(temp==2){
            cout<<2<<endl;
        }
        else if(temp%2==1){
            cout<<(temp+1)/2<<endl;
        }
        else if(temp%2==0){
            cout<<(temp/2)+1<<endl;
        }

    }
    // for(int i=0 ; i<score.size() ; i++){
    //     num=score[i];
    //     for(int j=1; j<=num ; j++){
    //         if()
    //         if(j%2 != 0){
    //             cout<< (j+1)/2;
    //             break;
    //         }
    //     }
    // }
    return 0;
}