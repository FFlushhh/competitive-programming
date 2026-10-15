#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        vector<pair<int, int>> alpha(26);
        rep(i, 26) {
            alpha[i].second = i;
        }
        rep(i, n) {
            alpha[s[i] - 'a'].first++;
        }

        // rep(i, 26) cout << alpha[i].first << " ";
        // cout << endl;

        sort(rall(alpha));

        // cout << "n: " << n << endl;
        bool ok = true;
        int target = 0;
        if (n % 2 == 1) {
            target = n / 2 + 1;
        } else {
            target = n / 2;
        }
        rep(i, 26) {
            if (alpha[i].first > target) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            No;
            continue;
        }
        Yes;

        string ans = "";

        for (int i = 0; i < n; ++i) {
            rep(j, 26) {
                if (i == 0) {
                    if (alpha[j].first > 0) {
                        ans += 'a' + alpha[j].second;
                        alpha[j].first--;
                        break;
                    }

                } else {
                    if (alpha[j].first > 0 && ans.back() - 'a' != alpha[j].second) {
                        ans += 'a' + alpha[j].second;
                        alpha[j].first--;
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}