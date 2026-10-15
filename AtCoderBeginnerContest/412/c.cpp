#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<ll> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];

        ll left_val = A.front();   // S1（ドミノ1 の大きさ）
        ll right_val = A.back();   // SN（ドミノN の大きさ）

        // 直接届くなら 2 個で十分
        if (right_val <= 2LL * left_val) {
            cout << 2 << '\n';
            continue;
        }

        // 候補は [left_val, right_val] の範囲の値のみ
        sort(A.begin(), A.end());
        auto L = lower_bound(A.begin(), A.end(), left_val);
        auto R = upper_bound(A.begin(), A.end(), right_val);
        vector<ll> v(L, R); // ソート済み, v[0] == left_val のはず, 最後に right_val を含む

        // もしソート済み配列内で隣接に埋められないギャップがあれば不可能
        bool possible = true;
        for (int i = 0; i + 1 < (int)v.size(); ++i) {
            if (v[i] * 2 < v[i + 1]) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << -1 << '\n';
            continue;
        }

        // 最小個数を数える（左端と右端を既に含めたカウントで始める）
        int ans = 2;            // 左端 + 右端
        ll last = 0;
        while (v[last] * 2 < right_val) {
            last = upper_bound(v.begin(), v.end(), v[last] * 2) - v.begin() - 1;
            ++ans;
        }

        cout << ans << '\n';
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<ll> A(N);
//         for (int i = 0; i < N; ++i) cin >> A[i];

//         ll left_val = A.front();   // S1（ドミノ1 の大きさ）
//         ll right_val = A.back();   // SN（ドミノN の大きさ）

//         // 直接届くなら 2 個で十分
//         if (right_val <= 2LL * left_val) {
//             cout << 2 << '\n';
//             continue;
//         }

//         // 候補は [left_val, right_val] の範囲の値のみ
//         sort(A.begin(), A.end());
//         auto L = lower_bound(A.begin(), A.end(), left_val);
//         auto R = upper_bound(A.begin(), A.end(), right_val);
//         vector<ll> v(L, R); // ソート済み, v[0] == left_val のはず, 最後に right_val を含む

//         // もしソート済み配列内で隣接に埋められないギャップがあれば不可能
//         bool possible = true;
//         for (int i = 0; i + 1 < (int)v.size(); ++i) {
//             if (v[i] * 2 < v[i + 1]) {
//                 possible = false;
//                 break;
//             }
//         }
//         if (!possible) {
//             cout << -1 << '\n';
//             continue;
//         }

//         // 最小個数を数える（左端と右端を既に含めたカウントで始める）
//         int ans = 2;            // 左端 + 右端
//         ll last = v[0];         // 現在末尾に置いたドミノのサイズ（最初は left_val）
//         for (int i = 1; i < (int)v.size(); ++i) {
//             if (last * 2 < v[i]) {
//                 // 現状の last では v[i] に届かない -> v[i-1] を中継点として置く
//                 ++ans;
//                 last = v[i - 1]; // 中継点を末尾として確定
//             }
//             // ※ ここで last は「置いた末尾」のまま（v[i] に自動で進めない）
//             //    次のループで必要に応じて中継点が追加される
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }
