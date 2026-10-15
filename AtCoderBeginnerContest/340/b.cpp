#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    vector<int> a;
    rep (i, q) {
        int judge;
        int x;
        cin >> judge >> x;
        if (judge == 1) {
            a.emplace_back(x);
        }
        else {
            cout << a[a.size() - x] << endl;
        }
    }
    return 0;
}