#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    int m;
    cin >> n >> m;
    vector<int> vi = {0, 2, 1, -1, -2, -2, -1, 1, 2};
    vector<int> vj = {0, 1, 2, 2, 1, -1, -2, -2, -1};
    set<pair<int, int>> st;
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        rep (j, 9) {
            int ni = a + vi[j];
            int nj = b + vj[j];
            if (ni > 0 && nj > 0 && ni <= n && nj <= n) {
                st.emplace(make_pair(ni, nj));
            }
        }
    }
    cout << n * n - st.size() << endl;
    return 0;
}

