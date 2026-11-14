#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
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

    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    if (a == b) {
        Yes;
        return 0;
    }

    
    // 見るべき範囲
    int l = 0, r = n - 1;

    rep(i, n) {
        if (a[i] == b[i]) ++l;
        else break;
    }

    rrep(i, n) {
        if (a[i] == b[i]) --r;
        else break;
    }

    bool ok = true;

    // a[i] と b[i + 1] の比較
    for (int i = l; i < r - 1; ++i) {
        if (a[i] != b[i + 1]) {
            ok = false;
        }
    }

    if (a[r] != b[l]) ok = false;

    if (ok) {
        Yes;
        return 0;
    }
    
    ok = true;

    // a[i + 1] と b[i] の比較
    for (int i = l; i < r - 1; ++i) {
        if (a[i + 1] != b[i]) {
            ok = false;
        }
    }

    if (a[l] != b[r]) ok = false;

    if (ok) Yes;
    else No;

    // rep(i, n) {
    //     if (!used) {
    //         if (a[i] == b[i]) {
    //             st.emplace_back(a[i]);
    //         } else if (tmp == -1) {
    //             tmp = a[i];
    //             st.emplace_back(b[i]);
    //         } else if (tmp == b[i]) {
    //             st.emplace_back(tmp);
    //             used = true;
    //             tmp = -1;
    //         } else {
    //             st.emplace_back(a[i]);
    //         }
    //     } else {
    //         st.emplace_back(a[i]);
    //     }
    // }

    // if (st == b) {
    //     ok = true;
    // }

    // if (ok) Yes;
    // else No;
    // rep(i, n) {
    //     if (tmp == -1) {
    //         if (a[i] == b[i]) {
    //             st.emplace_back(a[i]);
    //         } else if (!used) {

    //         }
    //     } else {

    //     }
    //     if (a[i] == b[i]) {
    //         st.emplace_back(a[i]);
    //     } else if (!used) {
    //         if (tmp == -1) {
    //             tmp = a[i];
    //         } else {
    //             st.emplace_back(tmp);
    //             tmp = -1;
    //             used = true;
    //         }
    //     } else {
    //         st.emplace_back(a[i]);
    //     }
    // }

    // if (tmp != -1) {
    //     st.emplace_back(tmp);
    // }

    // if (st == b) ok = true;

    // tmp = -1;
    // used = false;

    // rep(i, n) {
    //     if (a[i] == b[i]) {
    //         st.emplace_back(b[i]);
    //     } else if (!used) {
    //         if (tmp == -1) {
    //             tmp = b[i];
    //         } else {
    //             st.emplace_back(tmp);
    //             tmp = -1;
    //             used = true;
    //         }
    //     } else {
    //         st.emplace_back(b[i]);
    //     }
    // }

    // if (tmp != -1) {
    //     st.emplace_back(tmp);
    // }

    // if (st == a) ok = true;

    // if (ok) Yes;

    // int i = 0, j = 0;
    // while (i < n && j < n) {
    //     if (a[i] != b[j]) {
    //         if (a[i] == b[j + 1] && !used) {
    //             tmp = b[j];
    //             ++j;
    //             p = true;
    //             used = true;
    //         } else if (a[i + 1] == b[j] && !used) {
    //             tmp = a[i];
    //             ++i;
    //             q = true;
    //             used = true;
    //         } else {
    //             No;
    //             return 0;
    //         }
    //     } else if (tmp != -1) {
    //         if (p) {

    //         }
    //     }

    //     // // a[i]とb[i]を比較
    //     // if (tmp == -1) {
    //     //     if (a[i] != b[i]) {
    //     //         if (!used) {
    //     //             tmp = a[i];
    //     //             used = true;
    //     //             continue;
    //     //         } else {
    //     //             No;
    //     //             cout << "sign1" << endl;
    //     //             return 0;
    //     //         }
    //     //     }
    //     // } else { // a[i]とb[i + 1]を比較
    //     //     if (i < n - 1) {
    //     //         if (a[i + 1] != b[i]) {
    //     //             if (b[i] == tmp) {
    //     //                 i++;
    //     //                 tmp = -1;
    //     //                 continue;
    //     //             } else {
    //     //                 No;
    //     //                 cout << "sign2" << endl;
    //     //                 return 0;
    //     //             }
    //     //         }
    //     //     } else {
    //     //         if (b[i] != tmp) {
    //     //             No;
    //     //             cout << "sign3" << endl;
    //     //             return 0;
    //     //         }
    //     //     }
    //     // }
    //     // i++;
    // }
    // Yes;

    return 0;
}