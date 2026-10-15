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
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<set<int> > p(n);
    rep(i, k) {
        int a, b;
        cin >> a >> b;
        --a;
        p[a].insert(b);
        if (p[a].size() == m) {
            cout << a + 1 << '\n';
        }
    }

    return 0;
}