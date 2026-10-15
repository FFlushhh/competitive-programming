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
    
    ll x, y;
    cin >> x >> y;
    vector<string> a;
    string s, t;
    s = to_string(x);
    t = to_string(y);
    a.emplace_back(s);
    a.emplace_back(t);
    for (int i = 2; i <= 9; ++i) {
        string p = a[i - 1];
        string q = a[i - 2];
        ll z = stoll(p) + stoll(q);
        string r = to_string(z);
        reverse(r.begin(), r.end());
        a.emplace_back(r);
    }
    cout << stoll(a[9]) << endl;
    return 0;
}