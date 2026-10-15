#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<map<int, char>> v(5);
    v[0][a] = 'A';
    v[1][b] = 'B';
    v[2][c] = 'C';
    v[3][d] = 'D';
    v[4][e] = 'E';
    sort(v.begin(), v.end());
    cout << "ABCDE" << endl;
    // for (int i = 0; i < 5; ++i) {
    //     for (int j = 0; j < 5; ++j) {

    //     }
    // }

    return 0;
}