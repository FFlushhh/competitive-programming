#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;

    int count = 0;
    int countonetozero = 0;
    int continuousone = 0;
    int memory = 0;

    for (int i = 0; i < n; i++){
        if (i == 0 && s[i] == '1'){
            count++;
            // cout << "count: " << count << endl;
        }
        if (s[i] == '1'){
            if (s[i-1] == '0'){
                count++;
                // cout << "count: " << count << endl;
            }
        }
        if ((s[i-1] == '1') && (s[i] == '0')){
            countonetozero++;
            // cout << "countonetozero: " << countonetozero << endl;
        }
        if (countonetozero == k - 1 && memory == 0){
            memory = i;
            // cout << "memory: " << memory << endl;
        }
        if (count == k){
            continuousone++;
            // cout << "continuousone: " << continuousone << endl;
        }
        if (count == k && countonetozero == k){
            break;
        }
    }

    int changecount = 0;
    int j;
    int endone = memory + continuousone;

    for (j = memory; j < endone - 1; j++){
        s[j] = '1';
        changecount++;
        // cout << "changecount: " << changecount << endl;
    }

    for (j = memory + continuousone ; j < (endone + continuousone); j++){
        s[j] = '0';
    }

    cout << s << endl;

    return 0;
}