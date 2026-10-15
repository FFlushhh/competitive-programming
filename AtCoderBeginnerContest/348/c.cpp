#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    map<int, int> beans;
    rep (i, n) {
        int a, c;
        cin >> a >> c;
        if (beans.find(c) == beans.end()) {
            beans[c] = a;
        }
        else {
            beans[c] = min(beans[c], a);
        }
    }
    int ans = 0;
    for (auto p : beans) {
        ans = max(ans, p.second);
    }
    cout << ans << endl;
    return 0;
}
/*
map findメソッド
beans.find(c) == beans.end()
findは見つかった場合はそのイテレータを返し、見つからなかった場合はend()を返す
*/