#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    int changecount = 0;
    string s;
    cin >> n >> d;
    cin >> s;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '@') {
            ++changecount;
            s[i] = '.';
        }
        if (changecount == d) {
            break;
        }
    }
    cout << s << endl;
    return 0;
}