#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    int now = 0;
    while (true) {
        if (now * b <= a && (now + 1) * b >= a) {
            break;
        }
        now++;
    }
    if (abs(a - now * b) <= abs(a - (now + 1) * b)) {
        cout << now << '\n';
    } else {
        cout << now + 1 << '\n';
    }
    return 0;
}