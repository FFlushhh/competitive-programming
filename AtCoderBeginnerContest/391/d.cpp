#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

vector<pair<int, int>> G;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, w;
    cin >> n >> w;
    G.resize(n + 1, make_pair(0, 0));
    for (int i = 1; i <= n; ++i) {
        int x, y;
        cin >> x >> y;
        G[i] = make_pair(x, y);
    }
    vector<pair<int, ll>> Nord;
    while (!G.empty()) {

    }

    return 0;
}