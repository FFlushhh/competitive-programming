#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(4);
    rep(i, 4) cin >> a[i];
    map<int, int> mp;
    rep(i, 4) mp[a[i]]++;
    if (mp.size() == 2) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}