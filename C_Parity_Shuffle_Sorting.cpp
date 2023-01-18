#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define vvi vector<vector<long long>>
#define vi vector<long long>
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
        ll total = 0;
        cin >> n;
        vi ans;
        vi arr(n+1);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        if (n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            if ((arr[1] + arr[n]) % 2 == 0)
            {
                arr[1] = arr[n];
                total++;
                ans.push_back(1);
                ans.push_back(n);
            }
            else
            {
                arr[n] = arr[1];
                total++;
                ans.push_back(1);
                ans.push_back(n);
            }

            for (int i = 2; i <= n - 1; i++)
            {
                if ((arr[1] + arr[i]) % 2 == 0)
                {
                    arr[i] = arr[n];
                    total++;
                    ans.push_back(i);
                    ans.push_back(n);
                }
                else
                {
                    arr[i] = arr[0];
                    total++;
                    ans.push_back(1);
                    ans.push_back(i);
                }
            }
            cout << total << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " " << ans[i + 1] << " " << endl;
                i++;
            }
        }
    }
    return 0;
}