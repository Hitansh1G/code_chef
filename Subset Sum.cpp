#include <bits/stdc++.h>
using namespace std;
int subsetcount(int arr[],int n,int index,int target){
    if(index ==n){
        if(target==0){
            return 1;
        }
        else return 0;
    }
    int count=0 ;
    if(target-arr[index]>=0){
        count += subsetcount(arr,n,index+1,target-arr[index]);
    }
    count += subsetcount(arr,n,index+1,target);
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        cout<<subsetcount(arr,n,0,k)<<endl;
    }
    return 0;
}


