#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    ll Apow = 1, Bpow = 1;
    for (int i = 1; i <= b; ++i) {
        Apow *= a;
    }
    for (int i = 1; i <= a; ++i) {
        Bpow *= b;
    }
    cout << Apow + Bpow << endl;
    return 0;
}