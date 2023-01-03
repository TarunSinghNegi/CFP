#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define vvi vector<vector<long long>>
#define vi vector<long long>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        ll n;
        cin >> n;
        vi d(n);
        vi a(n);
        for(int i=0;i<n;i++)cin>>d[i];
        a[0]=d[0];
        bool flag=true;
        ll b=0;
        for(int i=1;i<n;i++)
        {   
            ll x1=a[i-1]+d[i];
            ll x2=a[i-1]-d[i];
           // cout<<x1<<x2<<endl;
            if(((x1>=0 && x2>=0) || (x1<=0 && x2<=0) ) && (d[i] != 0))
            {
               flag=false;
               break;
            }
            else
            {
                a[i]=max(x1,x2);
            }
            

        }   

        if(flag==false)
        {
            cout<<"-1"<<endl;
        }  
        else
        {
            for(auto x : a)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }   
    }
}
