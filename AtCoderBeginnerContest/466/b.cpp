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

// type: [ int ]
constexpr int INF = 1073741823;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> b(m, -INF);
    rep(i, n) {
        int c, s;
        cin >> c >> s;
        c--;
        b[c] = max(b[c], s);
    }
    rep(i, m) {
        if (b[i] == -INF) cout << -1 << endl;
        else cout << b[i] << endl;
    }
    cout << endl;
    return 0;
}