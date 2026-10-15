#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    if (l == 1 && r == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    else if (l == 0 && r == 1) {
        cout << "No" << endl;
        return 0;
    }
    else {
        cout << "Invalid" << endl;
        return 0;
    }
}