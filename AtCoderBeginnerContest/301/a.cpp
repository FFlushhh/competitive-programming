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
    cin >> n;
    string s;
    cin >> s;
    int T = 0, A = 0;
    rep (i, n) {
        if (s[i] == 'T') T++;
        else A++;
    }
    if (T > A) cout << "T" << endl;
    else if (A > T) cout << "A" << endl;
    else {
        if (s[n - 1] == 'T') cout << "A" << endl;
        else cout << "T" << endl;
    }
    return 0;
}