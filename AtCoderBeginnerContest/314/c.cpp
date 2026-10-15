#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<string> str(m, "");
    vector<int> c(n);
    rep (i, n) {
        cin >> c[i];
        --c[i];
        str[c[i]] += s[i];
    } 
    rep (i, m) {
        string tmp = "";
        tmp += str[i][str[i].size() - 1];
        tmp += str[i].substr(0, str[i].size() - 1);
        str[i] = tmp;
    }
    vector<int> idx(m, 0);
    rep (i, n) {
        cout << str[c[i]][idx[c[i]]];
        ++idx[c[i]];
    }
    return 0;
}

// 自力でできたが、時間がかかった