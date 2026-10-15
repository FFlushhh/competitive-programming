#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    string rs = s;
    reverse(rs.begin(), rs.end());

    // すでに回文ならそのまま出力
    if (s == rs) {
        cout << s << endl;
        return 0;
    }

    // Sの接頭辞とRの接尾辞が一致する最大の長さを探す
    int n = s.size();
    int max_match = 0;
    for (int i = 0; i < n; ++i) {
        if (s.substr(0, n - i) == rs.substr(i)) {
            max_match = n - i; // 一致する最大長さ
            break;
        }
    }

    // S の後ろに追加する部分（rs の max_match 以降の部分）
    string add = rs.substr(max_match);  // ここを修正
    cout << s + add << endl;

    return 0;
}
