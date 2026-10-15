// ABC457-D - Raise Minimum

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int n;
ll k;
vector<ll> a;

// ans を x 以上にすることはできますか
bool isOK(ll x)
{
    // すべてのi(1 <= i <= n)について、
    // a[i] >= x のとき、0
    // a[i] < x のとき、⌈(x - a[i]) / (i)⌉

    ll nowk = 0;
    rep1(i, n) {
        if (a[i] < x) {
            nowk += (x - a[i] + i - 1) / i;
        }
        if (nowk > k) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> k;
    a.resize(n + 1);
    rep1(i, n) cin >> a[i];
    
    ll mn = 1, mx = a[1] + k + 1;

    // cout << "mn: " << mn << " " << "mx: " << mx << endl;
    while (mx - mn > 1) {
        ll mid = (mn + mx) / 2;
        bool ok = isOK(mid);
        if (ok) {
            mn = mid;
        } else {
            mx = mid;
        }
        // cout << "mn: " << mn << " " << "mx: " << mx << endl;
    }

    cout << mn << endl;
    return 0;
}

/*
解が単調である -> 解の二分探索
    解の二分探索（決め打ち二分探索）
        ansを直接求めるのではなく、
        「ansをx以上にすることは可能ですか」
        という質問で解を特定する

「（K回の操作で）ansをx以上にできるか？」
<=> 「ansをx以上にするのに、必要な操作回数はk回以下か」
<=> 「すべての要素をx以上にするのに、必要な操作回数はx回以下か」

すべてのi(1 <= i <= n)について、
a[i] >= x のとき、0
a[i] < x のとき、⌈(x - a[i]) / (i)⌉

ansは、
1 <= ans < a[1] + k + 1
（a[1]にk回すべて操作を行っても届かない）
この範囲で解の二分探索を行う
*/