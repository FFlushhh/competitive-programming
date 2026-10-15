#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n >> s;
    pair<int, int> pos = {0, 0};
    set<pair<int, int>> visited;
    visited.insert(pos);
    rep(i, n) {
        if (s[i] == 'R') {
            pos.first++;
        } else if (s[i] == 'L') {
            pos.first--;
        } else if (s[i] == 'U') {
            pos.second++;
        } else if (s[i] == 'D') {
            pos.second--;
        }
        if (visited.count(pos)) {
            cout << "Yes" << endl;
            return 0;
        }
        visited.insert(pos);
    }
    cout << "No" << endl;
    return 0;
}