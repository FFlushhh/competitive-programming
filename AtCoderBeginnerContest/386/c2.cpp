#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    string s, t;
    cin >> k >> s >> t;
    int count = 0;
    if (s.size() == t.size()) {
        rep (i, s.size()) {
            if (s[i] != t[i]) {
                ++count;
            }
            if (count >= 2) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    else if (s.size() > t.size()) {
        rep (i, s.size()) {
            if (s[i] != t[i]) {
                string sb = s.substr(i + 1);
                string tb = t.substr(i);
                if (sb == tb) {
                    break;
                }
                cout << "No" << endl;
                return 0;
            }
        }
    }
    else {
        rep (i, t.size()) {
            if (s[i] != t[i]) {
                string sb = s.substr(i);
                string tb = t.substr(i + 1);
                if (sb == tb) {
                    break;
                }
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;  
    return 0;
}