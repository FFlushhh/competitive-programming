#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n, k;
vector<int> r;

void dfs(vector<int> num)
{
    if (num.size() == n) {
        int s = 0;
        for (int i = 0; i < num.size(); ++i) {
            s += num[i];
        }
        if (s % k == 0) {
            for (int j = 0; j < n; ++j) {
                cout << num[j] << " ";
                if (j == n - 1) cout << endl;
            }
        }
        return;
    }

    for (int i = 1; i <= r[num.size()]; ++i) {
        num.emplace_back(i);
        dfs(num);
        num.pop_back();
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    r.resize(n);
    rep(i, n) cin >> r[i];

    vector<int> num;
    dfs(num);

    return 0;
}