// 解説AC

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > lr(n);
    rep(i, n) cin >> lr[i].second >> lr[i].first;
    
    /*
    判定時には、次に選べる布の中で
    右端が最も小さい布を選ぶ

    そのため、右端Rの昇順にする
    右端が同じ場合は、左端順にする
    */
    sort(all(lr));
    rep(i, n) swap(lr[i].first, lr[i].second);

    /*
    can(distance):
    どの2枚の距離もdistance以上になるように、
    K枚以上の布を選べるか判定する（貪欲法）
    */
    auto can = [&](int distance) -> bool
    {
        int selected = 0;

        int lastR = 0;

        for (auto [l, r] : lr) {
            /*
            最初の布は無条件に選ぶ

            2枚目以降は最初の布の左端と全外の布の右端が
            distance以上なら選べる
            */
            if (selected == 0 || l - lastR >= distance) {
                selected++;
                lastR = r;
            }

            if (selected >= k) {
                return true;
            }
        }

        return false;
    };

    /*
    閉区間なので、重ならない布同士の距離は1以上。

    distance=1でもK枚選べないなら、
    重ならないK枚を選ぶこと自体が不可能。
    */
    if (!can(1)) {
        cout << -1 << endl;
        return 0;
    }

    /*
    二分探索

    ok：達成可能
    ng：達成不可能

    座標は最大10^9なので、10^9+1は必ず不可能。
    */
    int ok = 1, ng = 1e9 + 1; 

    while (ng - ok > 1) {
        int mid = (ng + ok) / 2;
        if (can(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok << endl;
    return 0;
}

/*
[正解の方針]
最小値の最大化 -> 解の決め打ち二分探索
ok = 1, ng = 1e9 + 1 とする
while ng - ok > 1:
    mid = (ng + ok) / 2
    貪欲に lastR - nowL >= mid である布を距離が小さい順にとっていき、cnt++
    cnt >= k のとき、midは達成可能
最後まで回してcnt <= k のとき、midは達成不可能
*/

// // https://algo-method.com/tasks/363/editorial を参考に

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)
// #define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
// #define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
// #define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define Yes cout << "Yes" << endl
// #define No cout << "No" << endl

// // type: [ int ]
// constexpr int INF = 1073741823;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n, k;
//     cin >> n >> k;
//     vector<int> l(n), r(n);
//     rep(i, n) cin >> l[i] >> r[i];
//     vector<int> ids(n);
//     rep(i, n) ids[i] = i;
//     sort(ids.begin(), ids.end(), [&](int i, int j) {
//         return r[i] < r[j];
//     });
//     int now = 0;
//     int last = -1;
//     int mn = INF;
//     int ans = -1;
//     bool ok = false;
//     for (auto i : ids) {
//         if (l[i] <= last) continue;
//         now++;
//         if (last != -1) mn = min(mn, l[i] - last);
//         last = r[i];
//         if (now >= k) {
//             ans = max(ans, mn);
//             ok = true;
//         }
//     }
//     if (ok) cout << ans << endl;
//     else cout << -1 << endl;
//     return 0;
// }