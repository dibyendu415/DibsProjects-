#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector <int> v;
    int input;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    for (int i = 0; i < d; i++)
    {
        v.push_back(v[0]);
        v.erase(v.begin());
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
