#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(3);
    rep(i, 3) cin >> a[i];
    if (a[0] * a[1] == a[2] || a[0] * a[2] == a[1] || a[1] * a[2] == a[0])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}