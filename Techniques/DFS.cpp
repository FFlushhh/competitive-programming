/*
Depth First Search (DFS) is an algorithm for traversing or searching tree or graph data structures.
The algorithm starts at the root node and explores as far as possible along each branch before backtracking.
方針
進めるだけ進み、行き詰ったら一歩戻るを繰り返す。最初に戻ってきたら終了。

・頂点nexに進むときは、defを再帰呼び出し
・visited[nex] = true
・行き詰ったら、return
*/

// A62
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n, m; // n:頂点数, m:辺の数
vector<int> a, b, G[100010];
vector<bool> visited(100010, false);

void dfs(int pos)
{
    visited[pos] = true;
    for (int i = 0; i < G[pos].size(); ++i) {
        int nex = G[pos][i];
        if (visited[nex]) continue;
        dfs(nex);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    a.resize(m + 1);
    b.resize(m + 1);
    for (int i = 1; i <= m; ++i) {
        cin >> a[i] >> b[i];
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }

    dfs(1);

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            cout << "The graph is not connected." << endl;
            return 0;
        }
        if (i == n) {
            cout << "The graph is connected." << endl;
        }
    }
    return 0;
}