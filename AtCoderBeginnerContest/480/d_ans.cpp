// 解説見た

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

    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    // prefix_sum_a[i] = Aの先頭i個の和（第i群の合計）
    vector<ll> prefix_sum_a(n + 1);

    // prefix_sum_blocks[i] = Bの第1群〜第i群までの合計
    vector<ll> prefix_sum_blocks(n + 1);

    // block_end_positions[i] = Bの第i群の末尾位置（第i群までの総要素数）
    vector<ll> block_end_positions(n + 1);

    rep(i, n) {
        // 第i群はAの先頭i個なので、群の合計に等しい
        prefix_sum_a[i + 1] = prefix_sum_a[i] + a[i];

        // 第i群の合計を、完成済みの群の合計に加える
        prefix_sum_blocks[i + 1] = prefix_sum_blocks[i] + prefix_sum_a[i + 1];

        // 第i群にはi個の要素がある
        block_end_positions[i + 1] = block_end_positions[i] + (i + 1);
    }

    // Bの先頭pos個の和を求める
    const auto prefix_sum_b = [&](ll pos) -> ll {
        if (pos == 0) return 0;

        // pos以上となる最初の群の末尾位置を探す
        // block_end_position[block_idx - 1] < pos <= block_end_position[block_idx]
        int block_idx = lower_bound(all(block_end_positions), pos) - block_end_positions.begin();

        // 所蔵する群の中で、先頭から何個使用するか
        // 必ず1以上、block_idx以下となる
        int elements_in_block = pos - block_end_positions[block_idx - 1];

        return prefix_sum_blocks[block_idx - 1] + prefix_sum_a[elements_in_block];
    };

    while (q--) {
        ll l, r;
        cin >> l >> r;

        // Bの区間[l, r]の和
        cout << prefix_sum_b(r) - prefix_sum_b(l - 1) << "\n";
    }

    return 0;
}

/*
[私の考え]
群数列っぽい
何群目の頭から何番目かが分かると解けるのではないか


[正解の解法]
数列Bは、数列Aの先頭1個、先頭2個、…、先頭N個を順番に連結した数列である。Bの長さは最大O(N²)となるため、Bを直接構築せず、累積和と二分探索を用いて区間和を求める。

まず、Bの先頭p個の要素の和を F(p) と定義する。このとき、クエリ [L, R] の答えは F(R) - F(L-1) で求められる。

ここで、Bを連結された数列ごとに第1群、第2群、…、第N群と分ける。第k群はAの先頭k個で構成されるため、その要素の和はAの累積和 S[k] に等しい。

そこで、次の3つの配列を前計算する。

- S[k]：Aの先頭k個の和
- P[k]：Bの第1群から第k群までの和（Sの累積和）
- T[k]：Bの第1群から第k群までの要素数（k(k+1)/2）

次に、F(p) を求める。T[k] は単調増加するため、二分探索によって T[k] ≥ p を満たす最小のkを求める。これにより、Bの位置pが第k群に属することが分かる。

第k群より前には T[k-1] 個の要素があるため、第k群から使用する要素数は d = p - T[k-1] となる。

したがって、Bの先頭p個の和は、第k−1群までの合計と、第k群の先頭d個の合計に分解できる。

F(p) = P[k-1] + S[d]

ただし、F(0) = 0 とする。

以上より、各クエリの答えは F(R) - F(L-1) で求められる。

前計算にO(N)、各クエリでは二分探索にO(log N)かかるため、全体の時間計算量は O(N + Q log N)、空間計算量は O(N)。
*/