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
    
    int n, q;
    cin >> n >> q;
    int now = 0;
    vector<int> a(n);
    map<int, int> mp; // 個数管理
    priority_queue<int> pq;
    bool two = 0;
    while (q--) {
        int op;
        cin >> op;
        // if (op == 1) {
        //     int x;
        //     cin >> x;
        //     if (a[x - 1] >= 1) mp[a[x - 1]]--;
        //     now ^= a[x - 1];
        //     a[x - 1]++;
            
        //     mp[a[x - 1]]++;
        //     now ^= a[x - 1];
        // } else {
        //     // 1以上は何個ありますか -> 二分探索
        //     int cnt = distance(mp.lower_bound(1), mp.end());
        //     // cout << "cnt: " << cnt << endl;
        //     now = max(0, now - cnt);
        //     // aはどうするの？？？
        //     for (auto [key, val] : mp) {
        //         if (key >= 1) {
        //             mp[key]--;
        //             mp[key - 1]++;
        //         }
        //     }
        //     two++;
        // }
        if (op == 1) {
            int x;
            cin >> x;
            x--;
            now ^= a[x];
            a[x]++;
            now ^= a[x];
        } else {
            rep(i, n) {
                if (a[i] >= 1) {
                    now ^= a[i];
                    a[i]--;
                    now ^= a[i];
                }
            }
        }
        cout << now << endl;
    }
    return 0;
}

/*
2回xorをとると元に戻る

*/