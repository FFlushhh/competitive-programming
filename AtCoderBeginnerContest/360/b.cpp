#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    for (int i = 1; i < s.size(); ++i) {
        vector<string> v;
        int l = 0;
        for (int j = 0; j < s.size(); ++j) {
            if ((j + 1) % i == 0) {
                v.emplace_back(s.substr(l, i));
                l = j + 1;
            }
            else if (j == s.size() - 1) {
                v.emplace_back(s.substr(l, s.size() - l));
            }
        }
        for (int j = 0; j < i; ++j) {
            string u = "";
            for (int k = 0; k < v.size(); ++k) {
                if (v[k].size() > j) {
                    u += v[k][j];
                }
            }
            if (u == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    
    cout << "No" << endl;
    return 0;
}