#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> d(n);
    rep (i, n) cin >> d[i];
    int cnt = 0;
    rep (i, n) {
        unordered_map<char, int> mp;
        string si = to_string(i + 1);
        rep (j, si.size()) mp[si[j]]++;
        if (mp.size() != 1) continue;
        for (int j = 1; j <= d[i]; ++j) {
            string sj = to_string(j);
            for (int k = 0; k < sj.size(); ++k) {
                if (mp.find(sj[k]) == mp.end()) break;
                if (k == sj.size() - 1) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}