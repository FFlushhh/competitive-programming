// 解答

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n - 1);

    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    // 最初の要素を変更しないケースを調べる。
    int current = a[0];
    int operations = 0;

    for (int i = 0; i < n - 1; ++i) {

        // 左側の偶奇が決まれば、
        // 条件を満たす右側の偶奇も一意に決まる。
        int next = current ^ b[i];

        // 元の偶奇と異なるなら1回変更する。
        operations += (next != a[i + 1]);

        current = next;
    }

    // 最初を反転させたもう1つの候補では、
    // すべての目標偶奇が反転する。
    // そのため、操作回数はn-operationsとなる。
    cout << min(operations, n - operations) << '\n';

    return 0;
}
