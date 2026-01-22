#include <bits/stdc++.h>
using namespace std;

long long vp(long long n, long long p) {
    long long res = 0;
    while (n) {
        n /= p;
        res += n;
    }
    return res;
}

int main() {

    long long n, b;
    cin >> n >> b;

    long long temp = b;
    map<long long, long long> factors;

    for (long long i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            factors[i]++;
            temp /= i;
        }
    }
    if (temp > 1) factors[temp]++;

    long long ans = LLONG_MAX;

    for (auto &it : factors) {
        long long p = it.first;
        long long a = it.second;

        long long cnt = vp(n, p);     
        ans = min(ans, cnt / a);
    }

    cout << ans << "\n";
    return 0;
}
