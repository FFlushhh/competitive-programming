#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, p;
    int count = 0;
    int day = 0;
    vector<int> l;
    cin >> n >> t >> p;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x >= t) {
            ++count;
        }
        l.emplace_back(x);
    }
    while (count < p) {
        count = 0;
        for (int i = 0; i < n; ++i) {
            ++l[i];
            if (l[i] >= t) {
                ++count;
            }
        }
        ++day;
    }
    cout << day << endl;
    return 0;
}