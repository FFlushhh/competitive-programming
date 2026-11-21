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

    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    rep(i, n) {
        int cnt = 0;
        rep(j, m) {
            if (s[i][j] == 'x') ++cnt;
        }

        if (cnt == m) {
            cout << "Faucet " << i + 1 << endl;
            return 0;
        }
    }

    rep(j, m) {
        if (s[0][j] == 'x') {
            cout << "Drain " << j + 1 << endl;
            return 0;
        }
    }

    return 0;
}

/*
iを全部みる
    s[i]が全部× -> Faucet i が答え
    どれかでも〇 -> Drain確定で、xの場所が答え
*/