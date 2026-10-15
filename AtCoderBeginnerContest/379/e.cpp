#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    string s;
    cin >> n >> s;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int power = j - i;
            if (power == 0){
                cout << "足す数: " << s[i] << endl;
                sum += stoi(s[i]);
                cout << "sum: " << sum << endl;
            }
            else{
                cout << "足す数: " << int(s[i]) * pow(10, power)+ int(s[j]) * pow(10, power - 1) << endl;
                sum += int(s[i]) * pow(10.0, double(power))+ int(s[j]) * pow(10.0, double(power-1));
            }
        }
    }

    cout << sum << endl;
    return 0;
}