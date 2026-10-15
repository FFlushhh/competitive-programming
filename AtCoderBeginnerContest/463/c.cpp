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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> h(n), l(n);
    rep(i, n) cin >> h[i] >> l[i];
    unordered_map<int, int> mp;
    priority_queue<int> q;
    set<int> s;
    rep(i, n) {
        q.emplace(h[i]);
        mp[h[i]]++;
    }
    int Q;
    cin >> Q;
    int idx = 0;
    vector<pair<int, int> > query(Q);
    rep(i, Q) {
        int t;
        cin >> t;
        query[i] = {t, i};
    }
    sort(all(query));
    vector<pair<int, int> > ans;
    rep(_, Q) {
        auto [t, i] = query[_];
        while (t >= l[idx]) {
            mp[h[idx]]--;
            idx++;
        }
        while (mp[q.top()] == 0) q.pop();
        ans.emplace_back(i, q.top());
    }
    sort(all(ans));
    rep(i, ans.size()) cout << ans[i].second << " ";
    cout << endl;
    return 0; 
}