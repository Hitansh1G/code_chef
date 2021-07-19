#include<iostream>
using namespace std;
int main (){
    int testcase, num1, num2, sum;
    //cout << "enter no of test cases : ";
    cin >> testcase;
    for(int i =0 ; i<testcase ;i++){
        cin >> num1 >> num2;
        sum = num1+ num2;
        cout << sum <<endl ;
    }

}