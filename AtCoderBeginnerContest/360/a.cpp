#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int pos = 0;
    cin >> s;
    bool judge = false;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'M') {
            pos = i;
            break;
        }
    }
    for (int i = 0; i < pos; ++i) {
        if (s[i] == 'R') {
            judge = true;
            break;
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