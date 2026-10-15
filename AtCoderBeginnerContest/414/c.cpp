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
    
    ll a, n;
    cin >> a >> n;
    ll ans = 0;

    ll i = 1;
    while (true) {
        string seven = to_string(i);
        string t = seven;
        reverse(t.begin(), t.end());
        seven += t;
        ll tmp = stoll(seven);
        if (tmp > n) break;
        string ary, l, r;
        while (tmp) {
            ary += ((tmp % a) + '0');
            tmp /= a;
        }
        reverse(ary.begin(), ary.end());
        if (ary.size() % 2 == 0) {
            l = ary.substr(0, ary.size() / 2);
            r = ary.substr(ary.size() / 2);
        } else {
            l = ary.substr(0, ary.size() / 2);
            r = ary.substr(ary.size() / 2 + 1);
        }
        reverse(r.begin(), r.end());
        if (l == r) ans += stoll(seven);
        ++i;
    }

    i = 1;
    while (true) {
        string sodd = to_string(i);
        string t = sodd;
        reverse(t.begin(), t.end());
        sodd += t.substr(1);
        ll tmp = stoll(sodd);
        if (tmp > n) break;
        string ary, l, r;
        while (tmp) {
            ary += ((tmp % a) + '0');
            tmp /= a;
        }
        reverse(ary.begin(), ary.end());
        if (ary.size() % 2 == 0) {
            l = ary.substr(0, ary.size() / 2);
            r = ary.substr(ary.size() / 2);
        } else {
            l = ary.substr(0, ary.size() / 2);
            r = ary.substr(ary.size() / 2 + 1);
        }
        reverse(r.begin(), r.end());
        if (l == r) ans += stoll(sodd);
        ++i;
    }
    
    cout << ans << endl;
    return 0;
}