#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    cin >> x;
    string s = to_string(x);
    int pos = s.find(".");
    for (int i = s.size() - 1; i >= pos; --i) {
        if (s[i] == '0' || s[i] == '.') {
            s.pop_back();
        }
        else {
            break;
        }
    }
    cout << s << endl;
    return 0;
}