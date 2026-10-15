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
    
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    vector<pair<char, int> > rle;
    for (int i = 1; i < n; ++i) {
        char inq = (p[i - 1] < p[i] ? '<' : '>');
        if (rle.empty() || rle.back().first != inq) {
            rle.emplace_back(inq, 1);
        } else {
            rle.back().second++;
        }
    }
    ll ans = 0;
    for (int i = 1; i < rle.size() - 1; ++i) {
        if (rle[i].first == '>') {
            ll l = (rle[i - 1].first == '<' ? rle[i - 1].second : 0);
            ll r = (rle[i + 1].first == '<' ? rle[i + 1].second : 0);
            ans += l * r;
        }
    }
    cout << ans << '\n';
    return 0;
}