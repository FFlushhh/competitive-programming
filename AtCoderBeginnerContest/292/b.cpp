#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> cnt(n + 1);
    while (q--) {
        int op, x;
        cin >> op >> x;
        if (op == 1) {
            cnt[x]++;
        } else if (op == 2) {
            cnt[x] += 2;
        } else {
            cout << (cnt[x] >= 2 ? "Yes\n" : "No\n");
        }
    }
    return 0;
}