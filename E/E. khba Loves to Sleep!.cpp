#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        ll x;
        cin >> n >> k >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        auto can = [&](ll D) {
            ll cnt = 0;

            // antes do primeiro amigo
            if (a[0] >= D) {
                cnt += max(0LL, a[0] - D);
            }

            // entre amigos
            for (int i = 0; i + 1 < n; i++) {
                ll L = a[i] + D + 1;
                ll R = a[i + 1] - D - 1;
                if (L <= R) cnt += (R - L + 1);
            }

            // depois do último amigo
            if (x >= a[n - 1] + D) {
                cnt += max(0LL, x - (a[n - 1] + D));
            }

            return cnt >= k;
        };

        // binary search no melhor D
        ll lo = 0, hi = x, best = 0;
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (can(mid)) {
                best = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        vector<ll> ans;

        // antes do primeiro amigo
        for (ll p = 0; p + best < a[0] && (int)ans.size() < k; p++) {
            ans.push_back(p);
        }

        // entre amigos
        for (int i = 0; i + 1 < n && (int)ans.size() < k; i++) {
            ll L = a[i] + best + 1;
            ll R = a[i + 1] - best - 1;
            for (ll p = L; p <= R && (int)ans.size() < k; p++) {
                ans.push_back(p);
            }
        }

        // depois do último amigo
        for (ll p = a[n - 1] + best + 1; p <= x && (int)ans.size() < k; p++) {
            ans.push_back(p);
        }

        for (ll p : ans) cout << p << " ";
        cout << "\n";
    }
}
