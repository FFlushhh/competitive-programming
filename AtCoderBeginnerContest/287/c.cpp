#include <bits/stdc++.h>
#include <atcoder/dsu>
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
    atcoder::dsu dsu(n);
    vector<int> deg(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        dsu.merge(a, b);
        deg[a]++;
        deg[b]++;
    }
    bool ok = true;
    rep(i, n) {
        if (!dsu.same(0, i)) ok = false;
    }
    int cnt1 = 0;
    int cnt2 = 0;
    rep(i, n) {
        if (deg[i] == 1) cnt1++;
        else if (deg[i] == 2) cnt2++;
        else ok = false;
    }
    if (cnt1 == 2 && cnt2 == n - 2 && ok) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}