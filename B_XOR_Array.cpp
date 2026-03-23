#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<<int>> arr;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j< 3;j++){
            int a;
            cin>>a;
            arr[i].push_back(a);
        }
    }
}