#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == 'A' && c == 'D') || (a == 'D' && c == 'A') || (b == 'A' && d == 'D') || (b == 'D' && d == 'A') || (a == 'A' && b == 'D') || (a == 'D' && b == 'A') || (c == 'A' && d == 'D') || (c == 'D' && d == 'A')) Yes;
    else No;

    return 0;
}