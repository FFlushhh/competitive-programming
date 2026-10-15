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
    string s;
    cin >> s;
    string t;
    if (n < 3) {
        cout << "No" << endl;
        return 0;
    }
    t = s.substr(n - 3, 3);
    if (t == "tea") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}