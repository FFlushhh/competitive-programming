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

ll n, k;
vector<vector<ll> > a;

void dfs(vector<ll> now, ll sum)
{
    if ((ll)now.size() == n && sum == k) {
        a.emplace_back(now);
        return;
    }
    vector<ll> nxt = now;
    for (ll i = 0; sum + i * ((ll)now.size() + 1) <= k; ++i) {
        nxt.emplace_back(i);
        dfs(nxt, sum + i * (now.size() + 1));
        nxt = now;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> k;
    for (ll i = 0; i <= k; ++i) {
        dfs({i}, i);
    }
    sort(all(a));
    
    ll m = a.size();
    rep(i, m) {
        rep(j, n) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
DFSで全探索
*/