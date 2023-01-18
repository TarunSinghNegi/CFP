
#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define vvi vector<vector<long long>>
#define vi vector<long long>
#define ll long long
#define mod 1e+7
using namespace std;

int main()
{
    // int i;
    // cin >> i;
    // while (i--)
    // {
    ll n, k, diff;
    cin >> n >> k >> diff;
    ll ans = 0;
    vi arr(n);
    vi a;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > diff)
        {
            a.push_back((arr[i + 1] - arr[i]));
            ans++;
        }
    }
    ans++;
    // cout<<ans<<endl;
    //for(auto x:a)cout<<x<<endl;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        ll p;
        if(a[i]%diff!=0)
        {
            p=a[i]/diff+1-1;
        }
        else
        {
            p=a[i]/diff-1;
        }
        
        //cout << "p" << p << endl;
        if (k >= p)
        {
            k -= p;
            ans--;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;

    //}
}
