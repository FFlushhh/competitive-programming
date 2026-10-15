#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    map<int, multiset<int> > a;
    vector<set<int> > b(2e5 + 1);
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int i, j;
            cin >> i >> j;
            a[j].insert(i);
            b[i].insert(j);
        } else {
            int i;
            cin >> i;
            if (op == 2) {
                for (int j : a[i]) cout << j << " ";
                cout << endl;
            } else {
                for (int j : b[i]) cout << j << " ";
                cout << endl;
            }
        }
    }
    return 0;
}