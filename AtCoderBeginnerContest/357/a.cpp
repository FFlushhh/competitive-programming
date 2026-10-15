#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, m;
    int count = 0;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n) {
        m -= a[i];
        if (m < 0) {
            break;
        }
        ++count;
    }
    cout << count << endl;
    return 0;
}