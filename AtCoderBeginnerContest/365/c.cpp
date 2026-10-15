#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; ll m;
    cin >> n >> m;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    if (accumulate(a.begin(), a.end(), 0LL) <= m) {
        cout << "infinite" << endl;
        return 0;
    }
    sort(a.begin(), a.end());
    rep (x, a.back()) {
        
    }
    return 0;
}