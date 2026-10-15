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
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] != s[i - 1]) {
            if (!((s[i] == 'B' && s[i - 1] == 'A') || (s[i] == 'C' && s[i - 1] == 'B'))) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}