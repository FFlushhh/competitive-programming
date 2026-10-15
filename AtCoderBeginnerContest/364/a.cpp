#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    bool judge = false;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if (judge) {
            cout << "No" << endl;
            return 0;
        }
        string s;
        cin >> s;
        if (s == "sweet") {
            ++count;
        }
        else {
            count = 0;
        }
        if (count == 2) {
            judge = true;
        }
    }
    cout << "Yes" << endl;
    return 0;
}