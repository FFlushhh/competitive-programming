#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n - 2; ++i) {
        if (s.substr(i, 3) == "ABC") ans++;
    }
    rep (i, q) {
        int x;
        char c;
        cin >> x >> c;
        x--;
        for (int j = x - 2; j <= x; ++j) {
            if (j >= 0 && j <= n - 3 && s.substr(j, 3) == "ABC") ans--;
        }
        s[x] = c;
        for (int j = x - 2; j <= x; ++j) {
            if (j >= 0 && j <= n - 3 && s.substr(j, 3) == "ABC") ans++;
        }
        cout << ans << endl;
    }
    return 0;
}

/*
方針
最初の文字列を見て、ABCが何個あるか数える
クエリを受け取るたびに、そのクエリに関係する部分だけを見て、ABCが何個あるか数える
*/