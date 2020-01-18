//
// Created by ankit on 15-07-2019.
//

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int jumpSearch (vector <lli> v, lli n, lli x) {
    lli step = sqrt(n);

    lli prev = 0;

    while (v[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);

        if (prev >= n)
            return -1;
    }

    while (v[prev] < x)
    {
        prev++;

        if (prev == min(step, n))
            return -1;
    }

    if (v[prev] == x)
        return prev;

    return -1;
}

int main()
{
    lli t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        lli n;
        cin >> n;
        vector <lli> v;
        lli input;

        for (int i = 0; i < n; i++)
        {
            cin >> input;
            v.push_back(input);
        }
        lli k;
        cin >> k;
        cout << jumpSearch(v, n, k) << endl;
    }
}
