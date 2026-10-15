#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string ans = "";
    int cnt = 0, par = 1;
    rep (i, s.size()) {
        if (par == 1 && s[i] != 'i') {
            ans += "i";
            par = 1 - par;
            cnt++;
        }
        else if (par == 0 && s[i] != 'o') {
            ans += "o";
            par = 1 - par;
            cnt++;
        }
        ans += s[i];
        par = 1 - par;
    }
    if (ans.size() % 2 == 1) {
        ans += "o";
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}