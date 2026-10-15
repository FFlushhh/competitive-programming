#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    unordered_map<char, int> CountMap; // key: char, value: count
    cin >> s;

    if (s.size() % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }
    if (s[s.size() - 2] != s[s.size() - 1]) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); ++i) {
        CountMap[s[i]]++; // increment count of s[i]
    }
    for (const auto& pair : CountMap) { 
        if (!(pair.second == 0 || pair.second == 2)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}