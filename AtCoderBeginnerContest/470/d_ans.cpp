#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    // p[i]   : 位置iにある値
    // inv[v] : 値vが存在する位置
    //
    // 常に inv[p[i]] = i を満たすように管理する。
    vector<int> p(n + 1), inv(n + 1);

    // 最初の順列と、その逆順列を同時に構築する。
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        inv[p[i]] = i;
    }

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x, y;
            cin >> x >> y;

            // 交換前の値を記録する。
            // この2つの値の位置情報だけが変化する。
            int a = p[x];
            int b = p[y];

            // 位置xと位置yにある値を交換する。
            swap(p[x], p[y]);

            // 値aは位置yへ、値bは位置xへ移動した。
            // 逆順列も対応する2か所だけ更新する。
            inv[a] = y;
            inv[b] = x;
        }
        else {
            // タイプ2は現在の順列を逆順列にする操作。
            //
            // invの逆順列はpなので、
            // 2つの配列の役割を交換するだけでよい。
            //
            // vector同士のswapはO(1)。
            swap(p, inv);
        }
    }

    // pは常に現在の順列を表している。
    for (int i = 1; i <= n; ++i) {
        cout << p[i] << (i == n ? '\n' : ' ');
    }

    return 0;
}
