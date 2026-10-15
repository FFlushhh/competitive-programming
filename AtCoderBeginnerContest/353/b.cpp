#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, k;
    cin >> n >> k;
    int seat = k;
    int count = 0;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    rep (i, n) {
        if (seat >= a[i]) {
            seat -= a[i];
        } else {
            ++count;
            seat = k;
            seat -= a[i];
        }
    }
    cout << count + 1 << endl; // ループでは新しいバスを必要とした回数を数えるが、最初に乗ったバスもカウントするため+1する
    return 0;
}