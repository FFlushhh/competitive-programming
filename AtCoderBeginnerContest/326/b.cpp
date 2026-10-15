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
    for (;; ++n) {
        string s = to_string(n);
        vector<char> v(s.begin(), s.end());
        if (int(s[0] - '0') * int(s[1] - '0') == int(s[2] - '0')) {
            cout << n << endl;
            return 0;
        }
    }
}