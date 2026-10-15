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
    int count = 0;
    while ((n & 1) == 0) { // nと1のビット積が0でない間
        ++count;
        n >>= 1; // nを1ビット右シフト
    }
    cout << count << endl;
    return 0;
}

// ctz: count trailing zeros
// __builtin_ctz(n): nの末尾の0の数
// __builtin_clz(n): nの先頭の0の数
// __builtin_popcount(n): nの1の数