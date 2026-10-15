#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    sort(a.begin(), a.end());
    rep (i, n) {
        int y = a[i] - x;
        if (binary_search(a.begin(), a.end(), y)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}