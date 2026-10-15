#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
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
    vector<vector<pair<int, int> > > imos(2001 ,vector<pair<int, int> >(2001));
    vector<int> cnt(n);
    rep(i, n) {
        int u, d, l, r;
        cin >> u >> d >> l >> r;
        u--; d--; l--; r--;
        imos[u][l].first++;
        imos[u][l].second += i;
        imos[u][r + 1].first--;
        imos[u][r + 1].second -= i;
        imos[d - 1][l].first--;
        imos[d - 1][l].second -= i;
        imos[d - 1][r + 1].first++;
        imos[d - 1][r + 1].second += i;
    }
    rep1(i, 2000) {
        rep1(j, 2000) {
            imos[i][j].first += imos[i][j - 1].first;
            imos[i][j].second += imos[i][j - 1].second;
        }
    }
    rep1(j, 2000) {
        rep1(i, 2000) {
            imos[i][j].first += imos[i - 1][j].first;
            imos[i][j].second += imos[i - 1][j].second;
        }
    }
    rep(i, 2001) {
        rep(j, 2001) {
            if (imos[i][j].first == 1) {
                cout << i << " " << j << endl;
            }
        }
    }
    rep(i, n) cout << cnt[i] << endl;
    rep(i, n) {
        cout << 2000 * 2000 - cnt[i] << endl;
    }
    return 0;
}