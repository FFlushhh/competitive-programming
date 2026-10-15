#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> m(n);
    int now = 0;
    while (q--) {
        int a;
        cin >> a;
        a--;
        if (m[a] == 0) m[a] = 1;
        else m[a] = 0;
        if (m[a] == 1) {
            bool ok = false;
            if (n == 1) {
                ok = true;
            } else if (n == 2) {
                if (m[0] == 0 || m[1] == 0) ok = true;
            }
            else {
                if (a == 0) {
                    if (m[a + 1] == 0) ok = true;
                } else if (a == n - 1) {
                    if (m[a - 1] == 0) ok = true;
                } else {
                    if (m[a - 1] == 0 && m[a + 1] == 0) ok = true;
                    else if (m[a - 1] == 1 && m[a + 1] == 1) now--;
                }
            }
            if (ok) now++;
        } else {
            if (n == 1) {
                now = 0;
            } else if (n == 2) {
                if (m[0] == 0 || m[1] == 0) now = 1;
                else now = 0;
            }
            else {
                if (a == 0) {
                    if (m[a + 1] == 0) now--;
                } else if (a == n - 1) {
                    if (m[a - 1] == 0) now--;
                } else {
                    if (m[a - 1] == 0 && m[a + 1] == 0) now--;
                    else if (m[a - 1] == 1 && m[a + 1] == 1) now++;
                }
            }
        }
        cout << now << endl;
    }
    return 0;
}