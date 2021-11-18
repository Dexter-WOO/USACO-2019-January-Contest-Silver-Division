// Problem 3: Mountain View

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("mountains.in","r",stdin);
    freopen("mountains.out","w",stdout);
    long long n, m, ans;
    cin >> n;
    ans=n;
    pair <long long , long long> v[n];
    for (long long i=0; i<n; i++)
    {
        long long x, y;
        cin >> x >> y;
        v[i].first=x-y;
        v[i].second=x+y;
    }
    if (n==1)
    {
        cout << 1;
        return 0;
    }
    sort(v, v+n);
    m=v[0].second;
    for (long long i=1; i<n; i++)
    {
        if (v[i].second>m)
        {
            if (v[i].first==v[i-1].first)
            {
                ans--;
            }
            m=v[i].second;
        }
        else
        {
            ans--;
        }
    }
    cout << ans;
}
