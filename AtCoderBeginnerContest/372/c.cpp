#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// TLEになる
// 尺取り法？とは思った

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> a;
    rep (i, n) {
        if (s[i] == 'A') a.emplace_back(i);
    }
    rep (i, q) {
        int x;
        char c;
        cin >> x >> c;
        if (c == 'A') {
            if (s[x - 1] != 'A') a.emplace_back(x - 1);
        }
        else {
            if (s[x - 1] == 'A') {
                auto it = find(a.begin(), a.end(), x - 1);
                a.erase(it);
            }
        }
        s[x - 1] = c;
        int ans = 0;
        rep (j, a.size()) {
            if (s[a[j] + 1] == 'B' && s[a[j] + 2] == 'C') {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}