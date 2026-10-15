#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s;
    cin >> s;
    set<string> st;
    for (int i = 0; i < s.size(); ++i) { // 開始位置
        for (int j = 1; i + j <= s.size(); ++j) { // 取り出す長さ、長さが1からs.size()まで
            st.insert(s.substr(i, j)); // 部分文字列を列挙、重複を許さず、昇順に格納
        }
    }
    cout << st.size() << endl; // 部分文字列の数を出力
    return 0;
}

/*
set...順序付き集合、重複を許さず、昇順に要素を格納する
set<型> 変数名;
set<型> 変数名(初期化子);

subser()関数...文字列の部分文字列を列挙する
文字列sの部分文字列は
s.substr(開始位置, 取り出す長さ)
*/