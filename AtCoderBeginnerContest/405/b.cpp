#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    set<int> s;
    for (int i = 1; i <= m; ++i) {
        s.insert(i);
    }
    int idx = -1;
    set<int> now;
    rep (i, n) {
        int x;
        cin >> x;
        now.insert(x);
        if (s == now) {
            cout << n - i<< endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}