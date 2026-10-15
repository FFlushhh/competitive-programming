#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, k;
    cin >> n >> s >> k;
    int sum = 0;
    rep (i, n) {
        int p, q;
        cin >> p >> q;
        sum += p * q;
    }
    cout << (sum >= s ? sum : (sum + k)) << endl;
    return 0;
}