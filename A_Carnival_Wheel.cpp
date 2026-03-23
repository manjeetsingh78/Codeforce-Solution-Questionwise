#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        int g = gcd(l, b);
        int r = a % g;

        int ans = (l - 1) - ((l - 1 - r) % g);
        cout << ans << "\n";
    }
    return 0;
}
