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
    int i = 0;
    for (i = 0; i < s.size() / 2; ++i) {
        cout << s[i];
    }
    ++i;
    for (; i < s.size(); ++i) {
        cout << s[i];
    }
    return 0;
}