#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 0; i < 12; ++i){
        string s;
        cin >> s;
        if (s.size() == i + 1) {
            ++count;
        }
    }
    cout << count << endl;

    return 0;
}