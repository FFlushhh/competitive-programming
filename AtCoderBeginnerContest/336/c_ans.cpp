#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<int> a;
    --n;
    while (n) {
        a.push_back(n % 5);
        n /= 5;
    }
    if (a.empty()) {
        cout << 0 << endl;
        return 0;
    } 
    reverse(a.begin(), a.end());
    rep (i, a.size()) {
        cout << a[i] * 2;
    }
    return 0;
}

// 0, 2, 4, 6, 8を2で割ると、0, 1, 2, 3, 4になる
// n番目の整数を5進数とみなして計算すると、n-1になる
// すなわち、n-1を5進数で表す
// 出力時に2倍することで、0, 1, 2, 3, 4を0, 2, 4, 6, 8に変換する