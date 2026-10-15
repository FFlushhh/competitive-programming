#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string x, y;
    cin >> x >> y;
    if (x == "Ocelot") {
        if (y == "Ocelot") {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if (x == "Serval") {
        if (y != "Lynx") {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}