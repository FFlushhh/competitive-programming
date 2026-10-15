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
    vector<int> a;
    rep (i, 100) a.push_back(0); 
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        else if (t == 2){
            cout << a[a.size() - 1] << endl;
            a.pop_back();
        }
    }
    return 0;
}