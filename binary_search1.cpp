//
// Created by ankit on 07-08-2019.
//

#include <bits/stdc++.h>
using namespace std;

typedef int ll;

int main(void)
{
    ll n, x;
    cin >> n >> x;
    vector <ll> v;
    ll input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    ll k = 0;
    for (int b = n / 2; b >= 1; b /= 2)
    {
        while (k + b < n && v[k +  b] <= x)
            k += b;
    }

    if (v[k] == x)
    {
        cout << "Element found at " << k + 1 << endl;
    }
    else
        cout << "No element found" << endl;
}