#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    vector<int> a;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.emplace_back(x);
    }
    for (int i = n - k; i < n; ++i) {
        cout << a[i] << " ";
    } 
    for (int i = 0; i < n - k ; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}