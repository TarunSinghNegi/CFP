#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define vvi vector<vector<long long>>
#define vi vector<long long>
#define vvd vector<vector<double>>
#define vd vector<double>
#define ll long long
#define sort(arr) sort(arr.begin(), arr.end())
using namespace std;
int main()
{
    ll i;
    cin >> i;
    while (i--)
    {
        ll n;
        cin >> n;
        vd a(n);
        vd b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        double minn = INT_MAX;
        double maxx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxx = max(maxx, a[i] - b[i]);
            minn = min(minn, abs(a[i] - b[i]));
        }

        double ans = (maxx + minn) / 2.0;
        cout << ans <<endl;
    }
    return 0;
}