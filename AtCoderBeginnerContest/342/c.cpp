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
    string s;
    cin >> s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int q;
    cin >> q;
    while (q--) {
        char c, d;
        cin >> c >> d;
        replace(alphabet.begin(), alphabet.end(), c, d);
    }
    rep (i, n) {
        s[i] = alphabet[s[i] - 'a'];
    }
    cout << s << endl;
    return 0;
}

/*
方針
アルファベットの各文字が最終的に何に変換されるかを考える

各アルファベットの変換先を保持する配列を用意し、クエリを処理する
最後に文字列を変換する
*/