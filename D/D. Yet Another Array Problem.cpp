#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Se existir 1, resposta é 2
        bool hasOne = false;
        for (long long x : a) {
            if (x == 1) {
                hasOne = true;
                break;
            }
        }

        if (hasOne) {
            cout << 2 << "\n";
            continue;
        }

        // Calcula o gcd de todo o array
        long long g = a[0];
        for (int i = 1; i < n; i++) {
            g = std::gcd(g, a[i]);
        }

        // Procura o menor x >= 2 tal que gcd(g, x) == 1
        long long answer = -1;
        for (long long x = 2; x <= 60; x++) {
            if (std::gcd(g, x) == 1) {
                answer = x;
                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
