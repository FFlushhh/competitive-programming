#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    if (t.substr(0, n) == s && t.substr(m - n, n) == s) {
        cout << 0 << endl;
    }
    else if (t.substr(0, n) == s) {
        cout << 1 << endl;
    }
    else if (t.substr(m - n, n) == s) {
        cout << 2 << endl;
    }
    else {
        cout << 3 << endl;
    }
    return 0;
}