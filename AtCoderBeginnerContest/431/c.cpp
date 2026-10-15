#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
#define reps1(i, s, n) for (int i = s; i <= (int)(n); ++i)
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define all(x) (x).begin(), (x).end()


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> h(n), b(m);
    rep(i, n) cin >> h[i];
    rep(i, m) cin >> b[i];
    sort(h.begin(), h.end());
    sort(b.begin(), b.end());
    ll cnt = 0;
    int idx = 0;
    rep(i, min(n, m)) {
        while (idx < m && h[i] > b[idx]) {
            idx++;
        }
        if (idx >= m) break;
        cnt++;
        idx++;
    }
    if (cnt >= k) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0; 
}