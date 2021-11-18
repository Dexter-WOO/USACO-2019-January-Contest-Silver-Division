// Problem 1: Grass Planting

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("planting.in","r",stdin);
    freopen("planting.out","w",stdout);
    int n;
    cin >> n;
    int a[n-1];
    for (int i=0; i<n-1; i++)
    {
        a[i]=0;
    }
    for (int i=0; i<n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x-1]++;
        a[y-1]++;
    }
    cout << *max_element(a, a+(n-1))+1;
}
