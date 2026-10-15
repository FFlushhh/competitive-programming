#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep (i, m) cin >> a[i] >> b[i];
    rep (i, m) {
        set<int> s;
        bool ok = true;
        rep (j, m) s.insert(b[j]);
        rep (j, n) {
            if (!s.contains(j + 1)) {
                if (j + 1 == a[i]) continue;
                else {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            cout << a[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

/*
別解
setに1～nを入れておいて、b[i]を削除していく
setのサイズが2以上なら-1、1ならsetの値を出力
*/