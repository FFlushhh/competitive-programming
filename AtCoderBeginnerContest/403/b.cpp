#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t, u;
    cin >> t >> u;
    rep (i, t.size()) {
        rep (j, u.size()) {
            if (t[i] == u[j]) {
                int idxT = i;
                int idxU = j;
                bool judge1 = false;
                bool judge2 = false;
                while (idxT >= 0 && (t[idxT] == u[idxU] || t[idxT] == '?')) {
                    idxT--;
                    idxU--;
                    if (idxU < 0) {
                        judge1 = true;
                        break;
                    }
                }
                idxT = i;
                idxU = j;
                while (idxT < t.size() && (t[idxT] == u[idxU] || t[idxT] == '?')) {
                    idxT++;
                    idxU++;
                    if (idxU >= u.size()) {
                        judge2 = true;
                        break;
                    }
                }
                if (judge1 && judge2) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    int mx = 0;
    int now = 0;
    rep (i, t.size()) {
        if (t[i] == '?') now++;
        else now = 0;
        mx = max(mx, now);
    }
    if (mx >= u.size()) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}