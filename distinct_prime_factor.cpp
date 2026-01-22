#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactor(vector<int>arr){
    vector<int> res;
    for(auto a:arr){
        for(int i = 2;i*i<=a;i++){
            if(a%i==0){
                res.push_back(i);
                while(a%i==0){
                    a/=i;
                }
            }
        }
        if(a>1){
            res.push_back(a);
        }
    }
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    return res;
}

vector<int> factor(int a){

    vector<int> fct;
    for(int i = 2;i*i<=a;i++){
        if(a%i==0){
            fct.push_back(i);
            while(a%i==0){
                a/=i;
            }
        }
    }
    if(a>1){
        fct.push_back(a);
    }
    return fct;
}

int main(){

    int a;
    cin>>a;
    vector<int> fact = factor(a);
    vector<int> ans = primeFactor(fact);
    for(auto x:ans){
        cout<<x<<" ";
    }
    
    return 0;
}