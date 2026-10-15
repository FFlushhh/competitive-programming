#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int n;
    cin >> n;

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    cout << b <<  c << a << " " << c << a << b << endl;
    return 0;
}