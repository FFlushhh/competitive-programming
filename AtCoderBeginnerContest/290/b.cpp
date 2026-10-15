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
    
    int n, k;
    string s;
    cin >> n >> k >> s;
    int cnt = 0;
    rep(i, n) {
        if (s[i] == 'o' && cnt < k) {
            cout << 'o';
            cnt++;
        } else {
            cout << 'x';
        }
    }
    return 0;
}