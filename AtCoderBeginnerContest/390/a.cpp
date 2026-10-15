#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(5);
    rep(i, 5) cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    if (a == b) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 1; i <=5; i++) {
        if (a[i - 1] != i) {
            swap(a[i - 1], a[i]);
            break;
        }
    }
    if (a == b) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}