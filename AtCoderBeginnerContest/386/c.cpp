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
                s.erase(i + 1, 1);
            }
            cout << s << endl;
            cout << t << endl;
            if (s == t) break;
            cout << "No" << endl;
            return 0;
        }
    }
    else {
        rep (i, t.size()) {
            if (s[i] != t[i]) {
                s.insert(i, 1, t[i]);
                if (s == t) break;
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;  
    return 0;
}