#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int move = 0;
    int now = 0;
    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < s.size(); ++j){
            if (s[j] == 'A' + i) {
                if (i == 0) {
                    now = j;
                }
                else {
                    move += abs(now - j);
                    now = j;
                }
                break;
            }
        }
    }

    cout << move << endl;
    return 0;
}