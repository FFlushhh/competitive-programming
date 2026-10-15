#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    ll ans = 0;
    bool ok = true;
    int j = 2;
    for (int i = 1; i < n; ++i) {
        if (i >= j) j = i + 1;
        while (j <= n) {
            cout << "? " << i << " " << j << endl;
            string s;
            cin >> s;
            if (s == "Yes") j++;
            else break;
        }
        ans += j - i - 1;
    }
    cout << "! " << ans << endl;
    // for (int i = 1; i < n; ++i) {
    //     for (int j = i + 1; j <= n; ++j) {
    //         cout << "? " << i << " " << j << endl;
    //         string s;
    //         cin >> s;
    //         cnt++;
    //         if (s == "No") break;
    //         if (cnt == 2 * n) {
    //             ok = false;
    //             break;
    //         }
    //         ans++;            
    //     }
    //     if (!ok || i == n - 1) {
    //         cout << "! " << ans << endl;
    //         return 0;
    //     } 
    // }
    return 0;
}