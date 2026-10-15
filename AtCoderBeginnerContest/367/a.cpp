#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((b <= a && a <= c && c <= 24) || (b <= a && c <= b && a <= 24) || (c <= b && a <= c))  {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
    return 0;
}