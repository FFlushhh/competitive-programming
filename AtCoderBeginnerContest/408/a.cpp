#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, s;
    cin >> n >> s;
    vector<int> t(n);
    rep(i, n) cin >> t[i];
    int a = 0;
    rep (i, n) {
        if (abs(t[i] - a) > s) {
            cout << "No" << endl;
            return 0;
        }
        a = t[i];
    }
    cout << "Yes" << endl;
    return 0;
}