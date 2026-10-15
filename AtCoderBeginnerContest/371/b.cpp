#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    vector<bool> judge;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        judge.push_back(true);
    }
    for (int i = 0; i < m; ++i) {
        int x;
        char y;
        cin >> x >> y;
        --x;
        if (y == 'M' && judge[x] == true) {
            cout << "Yes" << endl;
            judge[x] = false;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}