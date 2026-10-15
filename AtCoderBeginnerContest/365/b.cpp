#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> a;
    vector<int> b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.emplace_back(x);
    }
    b = a;
    sort(b.begin(), b.end(), greater<int>());
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[1]) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}