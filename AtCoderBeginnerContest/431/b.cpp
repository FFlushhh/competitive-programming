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
    
    int x, n;
    cin >> x >> n;
    vector<ll> w(n);
    rep(i, n) cin >> w[i];
    int q;
    cin >> q;
    set<int> st;
    ll now = x;
    while (q--) {
        int p;
        cin >> p;
        p--;
        if (!st.count(p)) {
            now += w[p];
            st.emplace(p);
        } else {
            now -= w[p];
            st.erase(p);
        }
        cout << now << endl;
    }
    return 0;
}