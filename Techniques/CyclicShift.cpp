// ABC300 B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    rep (i, h) cin >> a[i];
    rep (i, h) cin >> b[i];
    rep (i, h) {
        rep (j, w) {
            bool ok = true;
            rep (k, h) {
                rep (l, w) {
                    // 列・行で割った余りを考えると、縦・横シフトできる
                    if (a[(i + k) % h][(j + l) % w] != b[k][l]) {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

/*
配列シフト
行・列で割った余りを考えると、縦・横シフトできる
(i + k) % h, (j + l) % w
*/