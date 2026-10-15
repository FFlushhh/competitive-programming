#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    int m;
    cin >> m;
    vector<string> s(m);
    vector<vector<bool> > ok(n, vector<bool>(26));
    rep(i, m) {
        cin >> s[i];
        int len = s[i].size() - 1;
        rep(j, n) {
            if (a[j] - 1 == len) {
                char word = s[i][b[j] - 1];
                ok[j][word - 'a'] = true;
                // cout << word << endl;
            }
        }
    }
    
    rep(i, m) {
        bool judge = true;
        int len = s[i].size() - 1;
        if (len + 1 != n) {
            // cout << "1" << endl;
            judge = false;
        }
        else {
            rep(j, n) {
                char word = s[i][j];
                if (!ok[j][word - 'a']) {
                    // cout << "2: " << s[i][j] << endl;
                    judge = false;
                }
            }
        }
        if (judge) Yes;
        else No;
    }
    return 0;
}