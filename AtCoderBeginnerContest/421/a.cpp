#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    int x;
    string y;
    cin >> x >> y;
    if (s[x - 1] == y) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}