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
    
    int n, k;
    string s;
    cin >> n >> k >> s;
    int mx = 0;
    map<int, set<string> > mp;
    rep(i, n - k + 1) {
        string t = s.substr(i, k);
        int cnt = 0;
        rep(j, n - k + 1) {
            if (s.substr(j, k) == t) cnt++;
        }
        mp[cnt].insert(t);
        mx = max(cnt, mx);
    }
    cout << mx << endl;
    for (auto st : mp[mx]) {
        cout << st << " ";
    }
    cout << endl;
    return 0;
}