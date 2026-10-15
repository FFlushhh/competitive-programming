#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q;
    cin >> n >> m >> q;
    vector<set<int> > mp(n + 1);
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x, y;
            cin >> x >> y;
            mp[x].insert(y);
        }
        else if (op == 2) {
            int x;
            cin >> x;
            mp[x].insert(0);
        }
        else {
            int x, y;
            cin >> x >> y;
            if (mp[x].count(y) || mp[x].count(0)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}