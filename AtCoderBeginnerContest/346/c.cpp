#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, k;
    cin >> n >> k;
    set<int> a; //setを使い、重複を防ぐ
    rep (i, n) {
        int x;
        cin >> x;
        a.insert(x); // setには昇順に格納される
    }
    long long ans = 0;
    auto itr = a.begin(); // setの先頭を指すイテレータ
    for (int i = 1; i <= k; ++i) {
        if (i == *itr) { // setの先頭とiが一致する場合
            ++itr; // setの次の要素を指す
            continue;
        }
        else {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}