#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int m;
    cin >> n >> m;

    vector<long long int> x(m);
    vector<long long int> a(m);

    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    // 数あるか判定
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a.at(i);
    }
    if (sum != n)
    {
        cout << -1 << endl;
        return 0;
    }
    // 1個だけを判定
    int d;
    for (int i = 0; i < m; i++)
    {
        d = 0;
        int left = 0;
        d = x[i] - a[i];
        left = n - x[i] + 1;
        if (left < d)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    

    
    return 0;
}