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
    if (n % 2 == 0) {
        rep (i, n) {
            if ((n / 2) - 1 == i) {
                cout << "==";
                ++i;
            }
            else {
                cout << "-";
            }
        }
    }
    else {
        rep (i, n) {
            if (n / 2 == i) {
                cout << "=";
            }
            else {
                cout << "-";
            }
        }
    }
    return 0;
}