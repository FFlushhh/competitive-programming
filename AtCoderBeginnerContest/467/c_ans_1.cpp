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

    int answer = n;

    // 最終的なa[0]の偶奇は0か1の2通りだけ。
    for (int first = 0; first < 2; ++first) {

        // 現在確定している要素の偶奇。
        int current = first;

        // 最初の要素が元のa[0]と異なる場合、
        // 1回の操作が必要。
        int operations = (a[0] != first);

        // 最初の偶奇が決まれば、
        // それ以降の偶奇はすべて一意に決まる。
        for (int i = 0; i < n - 1; ++i) {

            // (current + next) % 2 = b[i]
            // より、next = current XOR b[i]。
            int next = current ^ b[i];

            // 必要な偶奇が元のa[i+1]と異なるなら、
            // 1回の操作で反転させる必要がある。
            if (next != a[i + 1]) {
                ++operations;
            }

            // 次の隣接ペアの左側として使用する。
            current = next;
        }

        // 2通りのうち、操作回数が少ない方を採用。
        answer = min(answer, operations);
    }

    cout << answer << '\n';

    return 0;
}
