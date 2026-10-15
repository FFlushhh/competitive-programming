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
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    rep(i, m) {
        if (binary_search(a.begin(), a.end(), b[i])) {
            a.erase(lower_bound(a.begin(), a.end(), b[i]));
        }
    }
    rep(i, a.size()) {
        cout << a[i] << (i == a.size() - 1 ? '\n' : ' ');
    }
    return 0;
}