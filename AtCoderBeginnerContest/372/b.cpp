#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    int count = 0;
    int mult = 1;
    vector<int> a;
    
    cin >> m;
    
    while (m != 0) {
        while (m >= mult) {
            if (m >= 3 * mult) {
                mult *= 3;
                count++;
            }
            else {
                m -= mult;
                a.emplace_back(count);
                mult = 1;
                count = 0;
            }
        }
    }    

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}