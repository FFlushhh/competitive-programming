// 解説見た

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

int op(int a, int b)
{
    return a + b;
}

int e()
{
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;

    int offset = 0;
    vector<int> h(n);
    vector<int> atLeast(q + 1);

    int maxH = q;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x;
            cin >> x;
            x--;

            h[x]++;
            atLeast[h[x]]++;

            if (atLeast[h[x]] == n) {
                offset = h[x];
            }

        } else {
            int y;
            cin >> y;

            int threshold = y + offset;
            
            if (threshold > maxH) {
                cout << 0 << endl;
            } else {
                cout << atLeast[threshold] << endl;
            }
        }
    }
    return 0;
}