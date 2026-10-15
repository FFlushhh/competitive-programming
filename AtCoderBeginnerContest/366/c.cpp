#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    map<int, int> mp;
    rep(iq, q) {
        int sgn;
        cin >> sgn;
        if (sgn == 1) {
            int x;
            cin >> x;
            mp[x]++;
        }
        else if (sgn == 2) {
            int x;
            cin >> x;
            mp[x]--;
            if (mp[x] == 0) mp.erase(x);
        }
        else {
            cout << (int)mp.size() << endl;
        }
    }
    return 0;
}W