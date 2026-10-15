#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n >> s;
    bool ok = false;
    rep (i, n) {
        if (s[i] == '|') {
            if (!ok) ok = true;
            else ok = false;
        }
        else if (s[i] == '*' && ok) {
            cout << "in" << endl;
            return 0;
        }
    }
    cout << "out" << endl;
    return 0;
}