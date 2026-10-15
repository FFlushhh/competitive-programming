#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    if (s == "sick" && t == "sick") {
        cout << 1 << endl;
    } 
    else if (s == "sick" && t == "fine") {
        cout << 2 << endl;
    }
    else if (s == "fine" && t == "sick") {
        cout << 3 << endl;
    }
    else {
        cout << 4 << endl;
    }
    return 0;
}