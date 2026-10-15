#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    ll ans = 0;
    set<string> st;
    for (ll ab = 1; ab <= n; ++ab) {
        for (ll cd = 1; ab + cd <= n; ++cd) {
            for (ll a = 1; a <= ab; ++a) {
                if (ab % a != 0) continue;
                ll b = ab / a;
                for (ll c = 1; c <= cd; ++c) {
                    if (cd % c != 0) continue;
                    ll d = cd / c;
                    if (a * b + c * d == n) {
                        string s = to_string(min(a, b)) + to_string(max(a, b)) + to_string(min(c, d)) + to_string(max(c, d));
                        sort(s.begin(), s.end());
                        do {
                            if ((s[0] - '0') * (s[1] - '0') + (s[2] - '0') * (s[3] - '0') == n && !st.count(s)) {
                                ans++;
                                st.insert(s);
                            }
                        } while (next_permutation(s.begin(), s.end()));
                    }
                }
            }
        }
    }
    for (auto x : st) {
        cout << x << "\n";
    }
    cout << ans << "\n";
    return 0;
}