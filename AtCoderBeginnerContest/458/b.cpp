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
    
    int h, w;
    cin >> h >> w;
    rep(i, h) {
        rep(j, w) {
            // int num = 2;
            // if (i > 0)
            // if (i == 0 || i == h - 1) num--;
            // if (j == 0 || j == w - 1) num--;
            // cout << num << " ";
            int num = 0;
            if (i + 1 < h) num++;
            if (i - 1 >= 0) num++;
            if (j + 1 < w) num++;
            if (j - 1 >= 0) num++;
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}