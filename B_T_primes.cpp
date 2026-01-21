#include <bits/stdc++.h>
using namespace std;

int main(){
    const int MAX = 1000000;
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i = 2; i * i <= MAX; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        
        long long sqrtx = sqrtl(x);
        
        if(sqrtx * sqrtx == x && sqrtx >= 2 && sqrtx <= MAX && isPrime[sqrtx]){
            cout << "YES\n";
        } else if((sqrtx + 1) * (sqrtx + 1) == x && (sqrtx + 1) <= MAX && isPrime[sqrtx + 1]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}