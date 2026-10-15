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
    string s, a;
    cin >> s >> a;
    rep (i, n) {
        if (s[i] == 'o' && a[i] == 'o') {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}