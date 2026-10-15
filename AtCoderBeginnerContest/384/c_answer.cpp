#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    vector<int> v(5);
    rep (i, 5) {
        cin >> v[i];
    }
    vector<pair<int, string>> player; // (point, name)、すべての参加者の得点と名前の情報
    rep (i, 1 << 5) { // 00000から11111まで
        if (i == 0) continue; // 0のときはスキップ 00000はありえない
        int point = 0; // pairのfirstに入れる得点
        string name = ""; // pairのsecondに入れる文字列
        rep (j, 5) {
            if (i >> j & 1) { // iをjビット右シフトして1と論理積をとる、つまりiが00010のとき、jが2のときに1、01000となる
                point += v[j]; // 得点を加算
                name += 'A' + j; // 文字列に追加
            }
        }
        player.emplace_back(-point, name); // pairを追加、得点の符号を反転させておく
    }
    sort(player.begin(), player.end()); // pairのfirstで降順、secondで昇順にソート
    for (auto& p : player) {
        cout << p.second << endl;
    }
    return 0;
}

/*
1. 合計得点、文字のpair型のvectorを作成
2. sort
    1. first: 合計得点の降順
    2. second: 文字列の昇順
    vector作成時に得点の符号を反転させてどちらも昇順にする
*/