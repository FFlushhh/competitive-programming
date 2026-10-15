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
    int f = 0, a = 0;
    rep(i, n) {
        string s;
        cin >> s;
        if (s == "For") f++;
        else a++;
    }
    if (f > a) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}