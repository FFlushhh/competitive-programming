#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int memory = 0;
    vector<vector<int>> a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        a.emplace_back();
        for (int j = 0; j < i + 1; ++j) {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            memory = a[i][0];
        }
        else {
            if (memory - 1 >= i) {
                memory = a[memory - 1][i];
            }
            else {
                memory = a[i][memory - 1];
            }
        }
    }
    cout << memory << endl;
    return 0;
}