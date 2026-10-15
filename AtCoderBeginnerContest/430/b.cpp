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
    
    int n, m;
    cin >> n>> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    set<vector<string> > st;
    rep(i, n) {
        rep(j, n) {
            vector<string> tmp(m);
            bool ok = true;
            rep(k, m) {
                if (i + k >= n || j + m > n) {
                    ok = false;
                    break;
                }
                tmp[k] = s[i + k].substr(j, m);
            }
            if (ok) st.insert(tmp);
        }
    }
    cout << st.size() << endl;
    return 0;
}