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
    int cnt = 0;
    bool ok = false;
    rep (i, n) {
        string s;
        cin >> s;
        if (s == "private" && !ok) ++cnt;
        else if (s == "login") ok = true;
        else if (s == "logout") ok = false;
    }
    cout << cnt << endl;
    return 0;
}