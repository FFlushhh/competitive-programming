#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> box(n + 1);
    rep (i, q) {
        int x;
        cin >> x;
        if (x > 0) {
            box[x]++;
            cout << x << ' ';
        }
        else {
            int idx = 0;
            int mn = INT_MAX;
            for (int j = 1; j <= n; ++j) {
                if (box[j] < mn) {
                    mn = box[j];
                    idx = j;
                }
            }
            box[idx]++;
            cout << idx << ' ';
        }
    }
    return 0;
}