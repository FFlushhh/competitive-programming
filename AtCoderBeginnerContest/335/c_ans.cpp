#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> pos(n + q);
    rep (i, n) {
        pos.emplace_back(make_pair(n - i, 0)); // 重要: 各パーツの初期値を逆順に追加
    }
    rep (i, q) {
        int a;
        cin >> a;
        if (a == 1) {
            char b;
            pair<int, int> nowpos = pos.back(); // 末尾の要素を取得
            cin >> b;
            if (b == 'R') {
                ++nowpos.first;
            }
            else if (b == 'L') {
                --nowpos.first;
            }
            else if (b == 'U') {
                ++nowpos.second;
            }
            else if (b == 'D') {
                --nowpos.second;
            }
            pos.emplace_back(nowpos); // 末尾に追加
        }
        else {
            int x;
            cin >> x;
            pair<int, int> ans = pos[pos.size() - x]; // 末尾からx番目の要素を取得
            cout << ans.first << " " << ans.second << endl;
        }
    }
    
    return 0;
}