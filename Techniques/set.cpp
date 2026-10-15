#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    set<int> s;
    while(q--) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            s.insert(x);
        }
        else if (t == 2) {
            s.erase(x);
        }
        else {
            auto it = s.lower_bound(x);
            if (it != s.end()) {
                cout << *it << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}

/*
setとは
重複を許さない要素の集合である。
昇順に要素を格納する。
setは赤黒木によって実装されているため、挿入・削除・検索がO(logN)で行える。
二分探索木で実装されているため、lower_boundが使える

s.insert() : 要素を挿入 O(logN)
s.erase() : 要素を削除 O(logN)
s.lower_bound() : 指定した値以上の最小の要素を返す
s.upper_bound() : 指定した値より大きい最小の要素を返す
s.begin() : 先頭のイテレータを返す
s.end() : 末尾の次のイテレータを返す

setとmapの違い
setはキーだけを持つが、mapはキーと値のペアを持つ

multisetとは
重複を許すset

multimapとは
重複を許すmap
*/