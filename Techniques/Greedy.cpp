#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// ABC362 C - sum = 0
// 貪欲法

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    ll Lsum = 0, Rsum = 0;
    rep (i, n) {
        cin >> l[i] >> r[i];
        Lsum += l[i];
        Rsum += r[i];
    }
    if (Lsum > 0|| Rsum < 0) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    vector<int> ans = l;
    ll remain = -Lsum; // 増やす必要がある分 (Lsumはマイナスなので符号反転でプラスに)
    rep (i, n) {
        ll canAdd = r[i] - l[i];
        if (canAdd < remain) {
            ans[i] = r[i];
            remain -= canAdd;
        }
        else {
            ans[i] += remain;
            break;
        }
    }
    rep (i, n) cout << ans[i] << " ";
    return 0;
}

/*
方針: 貪欲法
1. Lsum > 0 または Rsum < 0 ならばNo
2. そうでないならばYes
3. l[i]をans[i]にコピーし、remain = -Lsumとする
4. i = 0からn-1まで以下を繰り返す
5. r[i] - l[i]がremainより小さいならば、ans[i] = r[i]とし、remain -= r[i] - l[i]
6. そうでないならば、ans[i] += remainとし、ループを抜ける
7. ansを出力する
*/