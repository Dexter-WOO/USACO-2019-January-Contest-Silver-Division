// Problem 2: Icy Perimeter

#include <bits/stdc++.h>
using namespace std;

int n, ma, mp, ca, cp;
char a[1003][1003];

void ff (int x, int y)
{
    if (a[x][y]=='.' || a[x][y]=='c' || x<1 || y<1 || x>n || y>n) return;
    a[x][y]='c';
    if (a[x-1][y]=='.') cp++;
    if (a[x+1][y]=='.') cp++;
    if (a[x][y-1]=='.') cp++;
    if (a[x][y+1]=='.') cp++;
    ca++;
    ff (x-1, y);
    ff (x+1, y);
    ff (x, y-1);
    ff (x, y+1);
    return;
}

int main ()
{
    freopen("perimeter.in","r",stdin);
    freopen("perimeter.out","w",stdout);
    cin >> n;
    for (int i=0; i<=n+1; i++)
    {
        a[0][i]='.';
        a[i][0]='.';
        a[n+1][i]='.';
        a[i][n+1]='.';
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (a[i][j]=='#')
            {
                ff (i, j);
                if (ca>ma)
                {
                    ma=ca;
                    mp=cp;
                }
                else if (ca==ma)
                {
                    mp=min(mp,cp);
                }
                cp=0;
                ca=0;
            }
        }
    }
    cout << ma << " " << mp;
    return 0;
}
