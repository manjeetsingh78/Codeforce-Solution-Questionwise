#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 1 << "\n";
        cout << a << "\n";
    } else {
        cout << 3 << "\n";
        cout << b << " " << b << " " << (3 * a - 2 * b) << "\n";
    }
    return 0;
}
