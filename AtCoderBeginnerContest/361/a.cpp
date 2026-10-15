#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    vector<int> a;
    cin >> n >> k >> x;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        a.emplace_back(b);
    }
    a.insert(a.begin() + k, x);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    return 0;
}