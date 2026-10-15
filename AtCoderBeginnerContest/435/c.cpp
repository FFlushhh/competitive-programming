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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int now = a[0];
    int idx = 0;
    // while (true) {
    //     int nxt = now;
    //     for (int i = idx; i < now; ++i) nxt = max(nxt, i + a[i]);
    //     if (nxt >= n - 1) {
    //         cout << n << endl;
    //         return 0;
    //     }
    //     idx = nxt;
    //     if (nxt <= now) break;
    //     now = nxt;
    // }
    while (true) {
        int nxt = now;
        for (int i = idx; i < now; ++i) {
            nxt = max(nxt, i + a[i]);
        }
        if (nxt == now) break;
        idx = now;
        now = nxt;
        if (now >= n - 1) {
            now = n;
            break;
        }
    }
    cout << now << endl;
    return 0;
}