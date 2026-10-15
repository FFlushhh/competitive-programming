#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int count = 0;
    rep (i, s.size()) {
        if (s[i] >= '1' && s[i] <= '9') {
            ++count;
        }
        else if (s[i] == '0') {
            if (s[i + 1] == '0') {
                ++count;
                ++i;
            }
            else {
                ++count;
            }
        }
    }
    cout << count << endl;
    return 0;
}