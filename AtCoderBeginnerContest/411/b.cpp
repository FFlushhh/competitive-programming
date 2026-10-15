#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> d(n - 1);
    rep (i, n - 1) cin >> d[i];
    rep (i, n - 1) {
        ll now = d[i];
        cout << now << " ";
        for (int j = i + 1; j < n - 1; ++j) {
            now += d[j];
            cout << now << " ";
        }
        cout << endl;
    }
    return 0;
}