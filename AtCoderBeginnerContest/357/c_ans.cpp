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
    vector<string> s = {"#"};
    rep (i, n) {
        int m = s.size(); // レベルが1つ前の
        int m3 = m * 3;
        vector<string> t(m3, string(m3, '.')); // レベルが1つ前の3倍の大きさのマスを作る
        rep (i, m3) {
            rep (j, m3) {
                t[i][j] = s[i % m][j % m]; // レベルが1つ前のマスをコピー（1つ前のマスが3*3に並ぶ）
            }
        }
        rep (i, m) {
            rep (j, m) {
                t[m + i][m + j] = '.'; // 中央を空白にする
            }
        }
        swap(s, t); // レベルが1つ前のマスを更新
    }
    rep (i, s.size()) cout << s[i] << endl;
    return 0;
}

/*
方針
レベルが1つ前のマスを3倍の大きさのマスにコピー（3*3すべて同じ図形）し、中央を空白にする
*/