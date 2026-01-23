#include <bits/stdc++.h>
using namespace std;

int main() {
    long long w, h, d;
    cin >> w >> h >> d;

    long long n;
    cin >> n;

    long long pw = 1, ph = 1, pd = 1;
    long long x = n;

    for (long long p = 2; p * p <= x; p++) {
        while (x % p == 0) {
            x /= p;

            if (w % (pw * p) == 0) pw *= p;
            else if (h % (ph * p) == 0) ph *= p;
            else if (d % (pd * p) == 0) pd *= p;
            else {
                cout << -1 << "\n";
                return 0;
            }
        }
    }

    if (x > 1) {
        long long p = x;
        if (w % (pw * p) == 0) pw *= p;
        else if (h % (ph * p) == 0) ph *= p;
        else if (d % (pd * p) == 0) pd *= p;
        else {
            cout << -1 << "\n";
            return 0;
        }
    }

    if (pw * ph * pd != n) {
        cout << -1 << "\n";
        return 0;
    }

    cout << (pw - 1) << " " << (ph - 1) << " " << (pd - 1) << "\n";
    return 0;
}
