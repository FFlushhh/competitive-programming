#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = y; i * z <= x; ++i) {
        if (i * z == x) {
            cout << "Yes" << endl;
            return 0;
        }
        x++;
    }
    cout << "No" << endl;
    return 0;
}