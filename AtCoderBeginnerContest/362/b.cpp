#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x;
    vector<int> y;
    int ab, bc, ca;
    bool judge = false;
    for (int i = 0; i < 3; ++i) {
        int a, b;
        cin >> a >> b;
        x.emplace_back(a);
        y.emplace_back(b);
    }
    ab = pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2);
    bc = pow(x[1] - x[2], 2) + pow(y[1] - y[2], 2);
    ca = pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2);
    if (ab > bc && ab > ca) {
        if (ab == bc + ca) {
            judge = true;
        }
    }
    else if (bc > ab && bc > ca) {
        if (bc == ab + ca) {
            judge = true;
        }
    }
    else {
        if (ca == ab + bc) {
            judge = true;
        }
    }
    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}