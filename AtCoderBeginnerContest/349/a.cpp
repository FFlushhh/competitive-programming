#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    int score = 0;
    cin >> n;
    rep (i, n - 1) {
        int a;
        cin >> a;
        if (a >= 0) {
            score += -a;
        }
        else {
            score += abs(a);
        }
    }
    cout << score << endl;
    return 0;
}