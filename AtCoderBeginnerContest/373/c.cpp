#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll Amax;
    ll Bmax;
    rep (i, n) {
        ll a;
        cin >> a;
        if (i == 0) Amax = a;
        Amax = max(Amax, a);
    }
    rep (i, n) {
        ll b;
        cin >> b;
        if (i == 0) Bmax = b;
        Bmax = max(Bmax, b);
    }
    cout << Amax + Bmax << endl; 
    return 0;
}