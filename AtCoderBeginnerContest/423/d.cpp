#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, int>;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    priority_queue<P, vector<P>, greater<P> > pq; // (退店時刻, 人数)
    int empty = k;  // 店に入れる残り人数
    ll nowtime = 0; // 現在時刻 

    rep(i, n) {
        int a, b, c; // a: 待ち行列に加わる時刻, b: 退店までの時間, c: 人数
        cin >> a >> b >> c;

        // 待ち行列に加わる時刻までに退店する人を処理
        while (!pq.empty() && pq.top().first < a) {
            empty += pq.top().second;   // 退店したので空きが増える
            pq.pop();
        }
        nowtime = max<ll>(nowtime, a);  // 現在時刻は待ち行列に加わる時刻以降にする

        // 空席が足りない時、退店待ち
        while (empty < c) {
            nowtime = pq.top().first;   // 次に退店する人の退店時刻まで待つ
            empty += pq.top().second;   // 退店したので空きが増える
            pq.pop();
        }

        empty -= c;                 // 入店
        pq.emplace(nowtime + b, c); // 退店予定を追加

        cout << nowtime << '\n';    // 入店時刻を出力
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)
// #define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n), b(n), c(n);
//     rep(i, n) cin >> a[i] >> b[i] >> c[i];
//     vector<bool> used(n, false);
//     deque<pair<int, int> > dq;
//     deque<pair<int, int> > shop;
//     ll shopin = 0;
//     ll t = a[0];
//     dq.emplace_back(b[0], c[0]);
//     while (dq.empty()) {
//         auto [left, deltatime] = dq.front();
//         dq.pop_front();
//         auto [shopleft, shopdeltatime] = shop.front();
//         shop.pop_front();
//         if (shopin + left <= k) {
//             shopin += left;
//             if (used[])
//         }

//     }
//     return 0;
// }