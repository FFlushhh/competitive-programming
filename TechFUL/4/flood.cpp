#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Vmax, n;
    cin >> Vmax >> n;
    vector<int> t(n);
    vector<vector<int>> v(n, vector<int>(12));
    rep (i, n) {
        cin >> t[i];
        rep (j, 12) {
            cin >> v[i][j];
        }
    }
    rep (i, 12) {
        int sum = 0;
        rep (j, n) {
            sum += v[j][i];
        }
        if (sum > Vmax) {
            int limit = n - i + 1;
            int time = i * 60 + t[0];
            cout << time << endl;
            if (time / 60 <= limit) {
                cout << time << endl;
                return 0;
            }
        }
    }
    cout << "No need!" << endl;
    return 0;
}