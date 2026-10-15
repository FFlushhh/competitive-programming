#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int r, x;
    cin >> r >>x;
    if (x == 1) {
        if (r >= 1600 && r <= 2999) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    } else if (x == 2) {
        if (r >= 1200 && r <= 2399) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}