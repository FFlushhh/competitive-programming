#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b, g;
    cin >> b >> g;
    cout << (b > g ? "Bat" : "Glove") << endl;
    return 0;
}