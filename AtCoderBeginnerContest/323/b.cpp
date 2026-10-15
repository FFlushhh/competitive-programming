#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> cnt(n);
    rep (i, n) {
        string s;
        cin >> s;
        int cntf = 0;
        rep (j, s.size()) {
            if (s[j] == 'o') {
                cntf++;
            }
        }
        int cnts = i + 1;
        cnt[i] = make_pair(cntf, -cnts);
    }
    sort(cnt.begin(), cnt.end(), greater<pair<int, int>>());
    rep (i, n) {
        cout << -cnt[i].second << endl;
    }
    return 0;
}