#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w, si, sj;
    cin >> h >> w >> si >> sj;
    si--; sj--;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    string x;
    cin >> x;
    rep (i, x.size()) {
        if (x[i] == 'U' && si - 1 >= 0 && s[si - 1][sj] != '#') si--;
        else if (x[i] == 'D' && si + 1 < h && s[si + 1][sj] != '#') si++;
        else if (x[i] == 'L' && sj - 1 >= 0 && s[si][sj - 1] != '#') sj--;
        else if (x[i] == 'R' && sj + 1 < w && s[si][sj + 1] != '#') sj++;
    }
    cout << si + 1 << " " << sj + 1 << endl;
    return 0;
}