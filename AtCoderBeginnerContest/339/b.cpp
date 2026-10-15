#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w, n;
    int xpos = 0, ypos = 0;
    bool xjudge = false;
    cin >> h >> w >> n;
    vector<string> s(h);
    rep (i, h) {
        rep (j, w) {
            s[i] += '.';
        }
    }
    rep (i, n) {
        int a;
        cin >> a;

    }
    return 0;
}