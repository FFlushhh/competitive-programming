#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_map<int, int> m;
    rep (i, n) {
        int a;
        cin >> a;
        if (m.find(a) == m.end()) {
            cout << -1 << " ";
        }
        else {
            cout << m[a] << " ";
        }
        m[a] = i + 1;
    }
    return 0;
}