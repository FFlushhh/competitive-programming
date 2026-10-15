#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    string s;

    cin >> n >> k;
    cin >> s;

    int count = 0;
    int eat = 0;
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (s.at(i) == 'O'){
            count++;
        }
        else if (s.at(i) == 'X'){
            count = 0;
        }

        if (count == k){
            eat++;
            count = 0;
        }
    }

    cout << eat << endl;

    return 0;
}