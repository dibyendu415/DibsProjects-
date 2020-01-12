//
// Created by ankit.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef int ii;
typedef unsigned  u;
int power(ii x, u y)
{
    ii result = 1;

    while (y > 0)
    {
        if (y & 1)
            result = result * x;

        y = y >> 1;
        x = x * x;
    }
    return result;
}
int main(void)
{
    ii x;
    u y;
    cin >> x >> y;
    cout << power(x, y) << endl;
}









