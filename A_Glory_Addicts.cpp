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
    cin >> n;
    vi arr(n);
    vi skill(n);
    ll ones = 0;
    ll zeroes = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];

      if (arr[i] == 0)
      {
        zeroes++;
      }
      else
      {
        ones++;
      }
    }
    for (int i = 0; i < n; i++)
    {
      cin >> skill[i];
    }

    if (zeroes >= ones)
    {
      ll t = n - 1;
      ll s = 1;
      while (s < t)
      {
        swap(arr[t], arr[s]);
        swap(skill[t], skill[s]);
        t += 2;
        s += 2;
      }
    }
    else{
      ll t = n - 1;
      ll s = 2;
      swap(arr[0], arr[zeroes]);
      swap(skill[0], skill[zeroes]);
      while (s < t)
      {
        swap(arr[t], arr[s]);
        swap(skill[t], skill[s]);
        t += 2;
        s += 2;
      }
    }

    ll sum;
    sum = skill[0];
    // cout<<"SUM"<<sum<<endl;
    for (int i = 1; i < n; i++)
    {
      if (arr[i] != arr[i - 1])
      {
        sum += 2 * skill[i];
      }
      else
      {
        sum += skill[i];
      }
    }

    cout << sum << endl;
  }

  return 0;
}
