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
    
    ll n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    vector<ll> acnt(n + 1), bcnt(n + 1);
    rep(i, n) acnt[i + 1] = acnt[i] + (s[i] == 'a');
    rep(i, n) bcnt[i + 1] = bcnt[i] + (s[i] == 'b');
    ll ans = 0;
    int j = 0;
    rep(i, n) {
        ll sb = bcnt[i] + b - 1;
        ll idxb = upper_bound(bcnt.begin(), bcnt.end(), sb) - bcnt.begin();
        ll sa = acnt[i] + a;
        ll idxa = lower_bound(acnt.begin(), acnt.end(), sa) - acnt.begin();
        if (idxb - idxa > 0) {
            // cout << "i:" << i << " "<< endl;
            // cout << "sa: " << sa << endl;
            // cout << "sb: " << sb << endl;
            // cout << "idxa: " << idxa << " " << "idxb: " << idxb << endl;
            ans += idxb - idxa;
        }
    }
    cout << ans << endl;
    return 0;
}