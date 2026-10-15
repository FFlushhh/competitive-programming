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
    
    string s;
    cin >> s;
    int i = s[0] - '0';
    int j = s[2] - '0';
    if (j < 8) {
        cout << i << "-" << j + 1 << "\n";
    } else {
        if (j == 8 && i < 8) cout << i + 1 << "-" << 1 << "\n";
        else cout << s << endl;
    }
    return 0;
}