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
    
    int t;
    cin >> t;
    while (t--) {
        ll na, nb, nc;
        cin >> na >> nb >> nc;
        ll total = na + nb + nc;
        cout << min(min(na, nc), total / 3) << "\n";
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)
// #define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)


// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         ll na, nb, nc;
//         cin >> na >> nb >> nc;
//         if (na == 0 || nc == 0) {
//             cout << "0\n";
//             continue;
//         }
//         ll ans = 0;
//         ans += min(min(na, nc), nb);
//         na -= ans;
//         nc -= ans;
//         if (na > 0 && nc > 0) {
//             if (na > nc) {
//                 ll tasu = min(na / 2, nc);
//                 ans += tasu;
//                 na -= tasu * 2;
//                 nc -= tasu;
//                 if (nc > 0 && na > 0) ans++;
//             } else {
//                 ll tasu = min(nc / 2, na);
//                 ans += tasu;
//                 na -= tasu;
//                 nc -= tasu * 2;
//                 if (nc > 0 && na > 0) ans++;
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }