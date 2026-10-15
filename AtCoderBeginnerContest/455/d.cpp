#include <bits/stdc++.h>
#include <atcoder/dsu>
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
    
    int n, q;
    cin >> n >> q;
    vector<int> place(n, 1);
    vector<int> now(n);
    vector<int> sankou(n);
    vector<int> ue(n);
    map<int, int> top;
    rep(i, n) top[i] = i;
    rep(i, n) now[i] = i;
    rep(i, n) sankou[i] = i;
    // atcoder::dsu dsu(n);
    rep(i, n) {
        cout << place[i] << " ";
    }
    cout << endl;
    while (q--) {
        int c, p;
        cin >> c >> p;
        c--; p--;
        // pはトップ
        place[now[p]] += ue[c] + 1;
        place[now[c]] -= ue[c] + 1;
        ue[p] += ue[c];
        now[c] = now[p];
        rep(i, n) {
            cout << place[i] << " ";
        }
        cout << endl;
    }
    // for (auto [key, val] : place) {
    //     cout << val << " ";
    // }
    // cout << endl;

    // while (q--) {
    //     int c, p;
    //     cin >> c >> p;
    //     c--; p--;
    // }
    return 0;
}