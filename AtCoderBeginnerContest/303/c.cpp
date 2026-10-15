#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<pair<int, int> > st;
    rep (i, m) {
        int x, y;
        cin >> x >> y;
        st.emplace(x, y);
    }
    pair<int, int> pos = {0, 0};
    for (char c : s) {
        if (c == 'R') pos.first++;
        else if (c == 'L') pos.first--;
        else if (c == 'U') pos.second++;
        else if (c == 'D') pos.second--;
        h--;
        if (h < 0) {
            cout << "No" << endl;
            return 0;
        }
        if (st.contains(pos) && h < k) {
            h = k;
            st.erase(pos);
        }
    }
    cout << "Yes" << endl;
    return 0;
}