#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, b, p;
    cin >> n >> b >> p;

    int wash = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            if (b > 0)
                b--;
            else
                wash++;
        }
        else
        {
            if (p > 0)
                p--;
            else if (b > 0)
                b--;
            else
                wash++;
        }
    }

    cout << wash << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
