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
    
    string s;
    cin >> s;
    vector<int> ans;
    rep(i, s.size()) {
        if (s[i] == '#') ans.emplace_back(i + 1);
    }
    for (int i = 0; i < ans.size(); i += 2) {
        cout << ans[i] << "," << ans[i + 1];
        cout << endl;
    }
    return 0;
}