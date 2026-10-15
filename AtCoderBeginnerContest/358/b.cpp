// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// int main() {
//     int n;
//     int a;
//     int prior = 0;
//     cin >> n >> a;
//     vector<int> t(n);
//     rep(i, n) {
//         cin >> t[i];
//     }
//     rep (i, n) {
//         if (i == 0) { // いらない
//             cout << t[i] + a << endl;
//             prior = t[i] + a;
//         }
//         else if (t[i] <= a * i) { // prior <= t[i]が正解
//             cout << t[0] + a * (i + 1) << endl; // cout << t[i] + a << endl; が正解
//             prior = t[0] + a * (i + 1); // prior = t[i] + a; が正解
//         }
//         else {
//             cout << t[i] + a << endl; // cout << prior + a << endl; が正解
//             prior = t[i] + a; // prior += a; が正解
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> t(n);
    rep(i, n) {
        cin >> t[i];
    }
    int prior = 0;
    rep(i, n) {
        if (prior <= t[i]) {
            cout << t[i] + a << endl;
            prior = t[i] + a;
        }
        else {
            cout << prior + a << endl;
            prior += a;
        }
    }
    
    return 0;
}