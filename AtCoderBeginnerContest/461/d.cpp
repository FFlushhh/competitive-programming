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

ll slidingWindow(vector<ll>& col, int limit)
{
    if (limit < 0) return 0;

    int n = col.size();
    int r = 0;
    ll sum = 0;
    ll res = 0;

    rep(l, n) {
        // sum + col[r] が limit 以下である限り、右端を伸ばす
        while (r < n && sum + col[r] <= limit) {
            sum += col[r];
            ++r;
        }

        // l, l + 1, ..., r - 1
        // -> r - 1 - l + 1 個 -> r - l 個
        res += r - l;
        
        // lをずらすので、col[l]を区間から外す
        if (l == r) { // 空区間のまま進めない場合は、rも進める
            r++;
        } else {
            sum -= col[l];
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    ll ans = 0;
    rep(top, h) {
        vector<ll> col(w);
        for (int bottom = top; bottom < h; ++bottom) {
            rep(j, w) {
                col[j] += s[bottom][j] - '0';
            }
            // ちょうどk = k以下 - (k - 1)以下
            ans += slidingWindow(col, k) - slidingWindow(col, k - 1);
        }
    }
    cout << ans << endl;
    return 0;
}

/*
長方形の上端topと下端bottomを固定する
-> あとは、左端leftと右端rightを選ぶだけの1次元の区間問題になる

topからbottomまでの行を固定したとき、各列について、その縦方向の和を求める
col[j] = top行からbottom行までの、j列目の合計
-> 列区間[left, right] を選んだ時の長方形の和は
col[left] + col[left+1] + ... + col[right]


*/