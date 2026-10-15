#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int idx = 0;
    for (char c = 'A'; c <= 'C'; ++c)
    {
        while (idx < s.size() && s[idx] == c) {
            ++idx;
        }
    }
    cout << (idx == s.size() ? "Yes" : "No") << endl;
    return 0;
}

/*
// indexが文字列の長さと同じになるか、文字がcと一致しなくなるまで繰り返す
// cと一致しなくなったら次の文字に移動
*/