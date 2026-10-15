#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int onecount = 0;
    int twocount = 0;
    int threecount = 0;

    for(int i = 0; i < n.size(); i++)
    {
        if(n[i] == '1')
        {
            onecount++;
        }
        else if(n[i] == '2')
        {
            twocount++;
        }
        else if(n[i] == '3')
        {
            threecount++;
        }
    }

    if (onecount == 1 && twocount == 2 && threecount == 3)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}