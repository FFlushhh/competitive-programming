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
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        rep(i, s.size()) {
            if (s[i] == '1') {
                bitset<i + 1> b(i + 1);
                cout << b << endl;
            }
        
        }
        // for (int i = 0; i < (1 << n); ++i) {

        // }
    }
    return 0;
}