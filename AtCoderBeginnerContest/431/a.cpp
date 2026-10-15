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
    
    int h, b;
    cin >> h >> b;
    if (h <= b) {
        cout << 0 << endl;
    } else {
        cout << h - b << endl;
    }
    return 0;
}