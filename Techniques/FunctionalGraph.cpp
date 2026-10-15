#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// ABC311 C - Find it!

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> next_position(n + 1); // 各インデックスの次の位置を記録(1-indexed)
    for (int i = 1; i <= n; ++i) cin >> next_position[i];
    
    vector<int> visit_order(n + 1); // 各インデックスの訪問順を記録(1-indexed)
    int step_count = 1;
    int current = 1;
    
    while (visit_order[current] == 0) {
        visit_order[current] = step_count;
        ++step_count;
        current = next_position[current];
    }
    
    vector<int> cycle_nodes;
    int cycle_length = step_count - visit_order[current];
    
    rep (i, cycle_length) {
        cycle_nodes.push_back(current);
        current = next_position[current];
    }
    
    cout << cycle_nodes.size() << endl;
    for (int x : cycle_nodes) cout << x << (x == cycle_nodes.back() ? '\n' : ' ');
    
    return 0;
}
