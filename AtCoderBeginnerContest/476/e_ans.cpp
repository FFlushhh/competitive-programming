// 解説見た...あと一歩だった

#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

// type: [ int ]
constexpr int INF = 1073741823;

pair<int, int> opmx(pair<int, int> a, pair<int, int> b)
{
    return (a.first > b.first ? a : b);
}

pair<int, int> opmn(pair<int, int> a, pair<int, int> b)
{
    return (a.first < b.first ? a : b);
}

pair<int, int> emx()
{
    return {-INF, -1};
}

pair<int, int> emn()
{
    return {INF, -1};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    vector<pair<int, int> > p(n);
    rep(i, n) {
        cin >> p[i].first;
        p[i].second = i;
    }
    // https://atcoder.github.io/ac-library/production/document_ja/segtree.html
    atcoder::segtree<pair<int, int>, opmx, emx> mx(p);
    atcoder::segtree<pair<int, int>, opmn, emn> mn(p);

    rep(i, m) {
        int l, r;
        cin >> l >> r;
        l--;
        
        auto [vmx, mxidx] = mx.prod(l, r);
        auto [vmn, mnidx] = mn.prod(l, r);

        mx.set(mxidx, {vmn, mxidx});
        mx.set(mnidx, {vmx, mnidx});

        mn.set(mxidx, {vmn, mxidx});
        mn.set(mnidx, {vmx, mnidx});
    }

    rep(i, n) {
        cout << mx.get(i).first << endl;
    }
    return 0;
}