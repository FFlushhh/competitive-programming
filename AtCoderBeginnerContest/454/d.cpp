#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        if (a == b) {
            Yes;
            continue;
        }
        string s = "";
        string t = "";
        for (auto c : a) {
            if (c == ')' && s.size() >= 3 && s.substr(s.size() - 3, 3) == "(xx") {
                s.pop_back();
                s.pop_back();
                s.pop_back();
                s += "xx";
            } else {
                s += c;
            }
        }
        for (auto c : b) {
            if (c == ')' && t.size() >= 3 && t.substr(t.size() - 3, 3) == "(xx") {
                t.pop_back();
                t.pop_back();
                t.pop_back();
                t += "xx";
            } else {
                t += c;
            }
        }
        if (s == t) Yes;
        else No;
    }
    return 0;
}