#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int a, e;
int LevelUp(int level)
{
    if (level == 1) {
        e -= a;
        if (e < 0) return 0;
        ++level;
        return LevelUp(level);
    }
    else {
        e -= 2 * LevelUp(level - 1);
        if (e < 0) return 0;
        ++level;
        return LevelUp(level);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> e;
    cout << LevelUp(1) << endl;
    return 0;
}