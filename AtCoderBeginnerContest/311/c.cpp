#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n;
vector<int> G;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    G.resize(n + 1);
    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        G[i] = a;
    }
    vector<int> dist(n + 1, -1);
    int v = 1;
    
    return 0;
}