#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    int count = 0;
    int num = 0;
    vector<int> v(3);
    cin >> a >> b;
    if (a == b) {
        cout << 1 << endl;
        return 0;
    }
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    v[0] = a - (b - a);
    ++count;
    if ((a + b) % 2 == 0 && v[0] != (a + b) / 2) {
        ++count;
    }
    num = b + (b - a);
    if (v[0] != num && v[1] != num) {
        ++count;
    }
    cout << count << endl;
    return 0;
}