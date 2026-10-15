#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    rep (i, n) cin >> x[i] >> y[i];
    queue<int> q;
    q.emplace(0);
    vector<bool> visited(n, false);
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        rep (j, n) {
            if ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) > d * d) continue;
            if (visited[j]) continue;
            q.emplace(j);
            visited[j] = true;
        }
    }
    rep (i, n) cout << (visited[i] ? "Yes" : "No") << endl;
    return 0;
}