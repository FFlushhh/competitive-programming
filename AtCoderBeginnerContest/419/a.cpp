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
    
    string s;
    cin >> s;
    if (s == "red") cout << "SSS" << endl;
    else if (s == "blue") cout << "FFF" << endl;
    else if (s == "green") cout << "MMM" << endl;
    else cout << "Unknown" << endl;
    return 0;
}