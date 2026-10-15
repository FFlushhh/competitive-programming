#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, d;
    cin >> a >> b >> d;
    for (int i = a; i <= b; i+=d) {
        cout << i << " ";
    }
    return 0;
}