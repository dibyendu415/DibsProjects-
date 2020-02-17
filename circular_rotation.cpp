#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    deque <int> v;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    for (int i = 0; i < k; i++)
    {
        v.push_front(v[n - 1]);
    }

    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        cout << v[m] << endl;
    }
}
