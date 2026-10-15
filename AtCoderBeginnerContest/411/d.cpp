#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;

    vector<int> op(q), p(q);
    vector<string> s(q);

    // クエリ先読み
    rep (i, q) {
        cin >> op[i] >> p[i];
        if (op[i] == 2) {
            cin >> s[i];
            reverse(s[i].begin(), s[i].end()); // 逆順にしておいて答えを作り、最後にもう一度逆順にする
        }
    }

    string ans;
    int i = 0; // サーバーが現在見ているPC番号 0なら独自文字列 それ以外ならPC[i]の文字列

    // 逆からクエリ処理
    while (q--) {
        // 1: PCpの文字列をサーバーの文字列で置き換える
        if (op[q] == 1) {
            if (i == p[q]) i = 0; // 
        }
        // 2: PCpの文字列の末尾に文字列sを追加する
        else if (op[q] == 2) { 
            if (i == p[q]) ans += s[q];
        }
        // 3: サーバーの文字列をPCpの文字列で置き換える
        else {
            if (i == 0) i = p[q]; // 
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}