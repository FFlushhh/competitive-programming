// 解答見た

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, v;
    cin >> q >> v;
    
    priority_queue<int> pq;

    while (q--) {
        int op, t;
        cin >> op >> t;

        if (op == 1) {
            int w;
            cin >> w;

            pq.emplace(w - t); // 時刻0基準

        } else {
            int val = pq.top();
            int ans = -1;
            if (!pq.empty()) {
                ans = min(v, val + t);
                pq.pop();
            }

            cout << ans << endl;
        }
    }

    return 0;
}

/*
全要素に同じ変化が加わるなら、共通部分を取り除き、各要素の変化しない値だけを保存できないか？

バッテリーを同じ時刻で比較できれば、充電が進んでも大小関係は逆転しない
-> 各バッテリーの残量を、共通の時刻に換算して比較できないか？

時刻 t_0 に残量 w_0 のバッテリーを挿入したとする
現在時刻をtとすると、実際の残量は、
C(t) = min(V, w_0 + t - t_0)
C(t) = min(V, t + (w_0 - t_0))
ここで、u = w_0 - t_0 とおくと
C(t) = min(v, t + u)

なお、
t：すべてのバッテリーに共通する現在時刻
u：各バッテリーで異なるが、挿入後は変化しない値

1. 最大値の追加・削除 → priority_queue
    ただし残量は時間とともに変化する
2.  すべてのバッテリーが速度1で増加
    同じ時刻では増加分が共通
3.  残量を数式で表す
    C(t) = min(V, w + t - t_0)
4.  時刻に依存しない部分を分離
    u = w - t_0
5.  uをpriority_queueで管理
    追加・取得・削除がO(log Q)
*/