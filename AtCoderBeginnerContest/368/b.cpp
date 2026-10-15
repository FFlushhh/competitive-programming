#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    int repeat = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0 ; i < n; ++i) {
        int x;
        cin >> x;
        if (x > 0) {
            ++count;
        }
        a.emplace_back(x);
    }
    while (count > 1) {
        sort(a.begin(), a.end(), greater<int>());
        if (a[0] > 0) --a[0];
        if (a[1] > 0) --a[1];
        count = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > 0) {
                ++count;
            }
        }
        ++repeat;
    }
    cout << repeat << endl;
    return 0;
}
/*
sort(最初, 最後) ... 最初から最後までを昇順にソート
sort(最初, 最後, greater<int>()) ... 最初から最後までを降順にソート
*/