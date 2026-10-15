#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n, d;
    int emcount = 0;
    cin >> n >> d;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            ++emcount;
        }
    }
    cout << emcount + d << endl;
    return 0;
}