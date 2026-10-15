#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.size();
    rep (i, n) {
        if (i + 1 % 2 == 1) {
            if (s[i] != 'i') {
                s.insert(i, "i");
                cnt++;
            }
        }
        else {
            if (s[i] != 'o') {
                s.insert(i, "o");
                cnt++;
            }
        }
    }
    if (n % 2 == 1) {
        if (s[n - 1] != 'i') {
            s += "i";
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}