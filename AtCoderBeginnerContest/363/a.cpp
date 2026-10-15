#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    if (r < 100) {
        cout << 100 - r << endl;
    }
    else if (r >= 100 && r < 200) {
        cout << 200 - r << endl;
    }
    else if (r >= 200 && r < 300) {
        cout << 300 - r << endl;
    }
    return 0;
}