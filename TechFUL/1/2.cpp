#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    char c;
    cin >> s >> c;
    s.insert(5, 1, c);
    cout << s << endl;
    return 0;
}