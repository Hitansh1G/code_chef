// Online C++ compiler to run C++ program online
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

using namespace std;

int main() {
    // Write C++ code here
    string s;
    cin >> s;
    string temp;
    vector<string> vec;
    vector<int>flag;
    for(int i=0 ; i<s.size() ; i++){
        char *token = strtok(s, " ");
        while (token != NULL){
            vec.push_back(token);
            token = strtok(NULL, " ");
        }
        // if(s[i]==" "){
        //     temp = s.substr(0,i);
        // }
        // //three two
        // //temp = t
        // else{
        //     vec.push_back(temp);
        //     temp="";
        // }
    }
    for(int i=0 ; i<vec.size() ; i++){
        if(vec[i]=="one"){
            flag.push_back(1);
        }
        if(vec[i]=="two"){
            flag.push_back(2);
        }
        if(vec[i]=="three"){
            flag.push_back(3);
        }
        if(vec[i]=="four"){
            flag.push_back(4);
        }
        if(vec[i]=="five"){
            flag.push_back(5);
        }
        if(vec[i]=="six"){
            flag.push_back(6);
        }
        if(vec[i]=="seven"){
            flag.push_back(7);
        }
        if(vec[i]=="eight"){
            flag.push_back(8);
        }
        if(vec[i]=="nine"){
            
            flag.push_back(9);
        }
        if(vec[i]=="double"){
            
            string a = vec[i+1];
            if(a=="one"){
                flag.push_back(1);
                flag.push_back(1);
            }
            if(a=="two"){
                flag.push_back(2);
                flag.push_back(2);
            }
            if(a=="three"){
                flag.push_back(3);
                flag.push_back(3);
            }
            if(a=="four"){
                flag.push_back(4);
                flag.push_back(4);
            }
            if(a=="five"){
                flag.push_back(5);
                flag.push_back(5);
            }
            if(a=="six"){
                flag.push_back(6);
                flag.push_back(6);
            }
            if(a=="seven"){
                flag.push_back(7);
                flag.push_back(7);
            }
            if(a=="eight"){
                flag.push_back(8);
                flag.push_back(8);
            }
            if(a=="nine"){
                flag.push_back(9);
                flag.push_back(9);
            }
        }
        if(vec[i]=="triple"){
            string a = vec[i+1];
            if(a=="one"){
                flag.push_back(1);
                flag.push_back(1);
                flag.push_back(1);
                
            }
            if(a=="two"){
                flag.push_back(2);
                flag.push_back(2);
                flag.push_back(2);
            }
            if(a=="three"){
                flag.push_back(3);
                flag.push_back(3);
                flag.push_back(3);
            }
            if(a=="four"){
                flag.push_back(4);
                flag.push_back(4);
                flag.push_back(4);
            }
            if(a=="five"){
                flag.push_back(5);
                flag.push_back(5);
                flag.push_back(5);
            }
            if(a=="six"){
                flag.push_back(6);
                flag.push_back(6);
                flag.push_back(6);
            }
            if(a=="seven"){
                flag.push_back(7);
                flag.push_back(7);
                flag.push_back(7);
            }
            if(a=="eight"){
                flag.push_back(8);
                flag.push_back(8);
                flag.push_back(8);
            }
            if(a=="nine"){
                flag.push_back(9);
                flag.push_back(9);
                flag.push_back(9);
            }
        }
    }
    for(int i=0 ; i<flag.size() ; i++){
        cout<<flag[i]<<" ";
    }
    return 0;
}
//flag [1242435]
//