#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int Acount = 0;
    int Bcount = 0;
    int Ccount = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            Acount++;
        }
        else if (s[i] == 'B')
        {
            Bcount++;
        }
        else if (s[i] == 'C')
        {
            Ccount++;
        }
    }

    if (Acount == 1 && Bcount == 1 && Ccount == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}