#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    int m;
    cin >> n >> m;
    vector<pair<int, int>> ab;
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        ab.emplace_back(make_pair(a, b));
        if (a + 2 > 0 && b + 1 > 0 && a + 2 <= n && b + 1 <= n) {
            ab.emplace_back(make_pair(a + 2, b + 1));
        }
        if (a + 1 > 0 && b + 2 > 0 && a + 1 <= n && b + 2 <= n) {
            ab.emplace_back(make_pair(a + 1, b + 2));
        }
        if (a - 1 > 0 && b + 2 > 0 && a - 1 <= n && b + 2 <= n) {
            ab.emplace_back(make_pair(a - 1, b + 2));
        }
        if (a - 2 > 0 && b + 1 > 0 && a - 2 <= n && b + 1 <= n) {
            ab.emplace_back(make_pair(a - 2, b + 1));
        }
        if (a - 2 > 0 && b - 1 > 0 && a - 2 <= n && b - 1 <= n) {
            ab.emplace_back(make_pair(a - 2, b - 1));
        }
        if (a - 1 > 0 && b - 2 > 0 && a - 1 <= n && b - 2 <= n) {
            ab.emplace_back(make_pair(a - 1, b - 2));
        }
        if (a + 1 > 0 && b - 2 > 0 && a + 1 <= n && b - 2 <= n) {
            ab.emplace_back(make_pair(a + 1, b - 2));
        }
        if (a + 2 > 0 && b - 1 > 0 && a + 2 <= n && b - 1 <= n) {
            ab.emplace_back(make_pair(a + 2, b - 1));
        }
    }
    // unordered_map<pair<int, int>, int> mp;
    // for (auto p : ab) {
    //     mp[p]++;
    // }
    // cout << n * n - mp.size() << endl; 
    return 0;
}

// エラー理由: pair<int, int>がハッシュ可能でないため
// ハッシュ関数を定義してもTLEとなる