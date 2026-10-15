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
    string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    rep (i, n + 2) cout << pi[i];
    return 0;
}