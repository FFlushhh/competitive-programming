#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string s = "";
    rep(i, n) {
        char c; int l;
        cin >> c >> l;
        ll len = s.size();
        if (len + l > 100) {
            cout << "Too Long" << endl;
            return 0;
        }
        s += string(l, c);
    }
    cout << s << endl;
    return 0;
}