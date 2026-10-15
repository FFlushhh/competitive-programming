#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

ll n, k, x;
vector<string> s;
vector<string> ans;

void dfs(string cur, int depth)
{
    if (depth == k) {
        ans.emplace_back(cur);
        return;
    }
    for (string str : s) {
        dfs(cur + str, depth + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> k >> x;
    s.resize(n);
    rep(i, n) cin >> s[i];

    dfs("", 0);

    sort(ans.begin(), ans.end());
    cout << ans[x - 1] << "\n";

    return 0;
}