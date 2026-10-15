#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    pair<int, int> nowpos = {1, 0};
    vector<pair<int, int>> pos(n);
    pos.push_back(nowpos);
    rep (i, q) {
        int a;
        string b;
        cin >> a >> b;
        if (a == 1) {
            if (b == "R") {
                ++nowpos.first;
            }
            else if (b == "L") {
                --nowpos.first;
            }
            else if (b == "U") {
                ++nowpos.second;
            }
            else if (b == "D") {
                --nowpos.second;
            }
            pos.emplace_back(nowpos);
        }
        if (a == 2) {
            int x = stoi(b);
            cout << pos[x - 2].first << " " << pos[x - 2].second << endl;
         }
    }
    
    return 0;
}