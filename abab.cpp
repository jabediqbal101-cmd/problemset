#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string X;
        cin >> n >> X;

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (X[i] == '?') continue;
            // 0-based index i => 1-based i+1
            if ((i % 2 == 0 && X[i] != 'a') || (i % 2 == 1 && X[i] != 'b')) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}