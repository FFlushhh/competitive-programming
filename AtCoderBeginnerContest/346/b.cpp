#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int w, b;
    cin >> w >> b;
    string piano = "wbwbwwbwbwbw";
    while (piano.size() <= 200) {
        piano += piano;
    }
    rep (i, piano.size() - (w + b)) {
        string sub = piano.substr(i, w + b);
        int Wcount = 0;
        int Bcount = 0;
        rep (j, sub.size()) {
            if (sub[j] == 'w') {
                Wcount++;
            } else {
                Bcount++;
            }
        }
        if (Wcount == w && Bcount == b) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}