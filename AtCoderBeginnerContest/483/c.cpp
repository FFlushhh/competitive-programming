#include <bits/stdc++.h>
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<ll, ll>> ab(m);
    vector<pair<ll, ll>> p(n);
    vector<ll> normal(n);

    rep(i, n) {
        p[i].second = -i;
    }

    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        a--; b--;

        ab[i].first = a;
        ab[i].second = b;

        p[a].first++;
        normal[a]++;
    }

    sort(all(ab));
    sort(rall(p));
    
    int j = 0;

    vector<ll> ans(n);
    ll normal_ans = -p.front().second;

    // i人目休み
    rep(i, n) {
        map<ll, ll> add;

        if (i < ab[j].first) {
            ans[i] = normal_ans;
            continue;
        } 

        if (normal_ans == i) {
            ans[i] = -p[1].second;
        } else {
            ans[i] = normal_ans;
        }

        while (j < m) {
            if (ab[j].first != i) break;
            add[ab[j].second]++;

            if (normal[ans[i]] + add[ans[i]] < normal[ab[j].second] + add[ab[j].second]) {
                ans[i] = ab[j].second;
            } else if (normal[ans[i]] + add[ans[i]] == normal[ab[j].second] + add[ab[j].second]) {
                ans[i] = min(ans[i], ab[j].second);
            }

            ++j;
        }
    }

    rep(i, n) {
        cout << ans[i] + 1 << endl;
    }

    return 0;
}