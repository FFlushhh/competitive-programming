#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, a;
    int dist;
    int sum;
    cin >> n >> t >> a;
    dist = abs(t - a);
    sum = t + a;
    if (n - sum < dist) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}