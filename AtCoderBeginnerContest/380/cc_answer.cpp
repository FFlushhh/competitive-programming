#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<string> v;
    string t = "";
    int cnt = 0;
    rep (i, n) {
        t += s[i];
        if (s[i] != s[i + 1]) {
            v.push_back(t);
            if (t[0] == '1') ++cnt;
            if (cnt == k) swap(v[v.size() - 1], v[v.size() - 2]);
            t = "";
        }
    }
    rep (i, v.size()) cout << v[i];
    return 0;
}