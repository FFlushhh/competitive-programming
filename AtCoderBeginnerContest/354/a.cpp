#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int h;
    int i, days = 0;
    cin >> h;
    int curheight = 0;
    while (h >= curheight) {
        curheight += pow(2, i);
        i++;
        days++;
    }
    cout << days << endl;
    return 0;
}