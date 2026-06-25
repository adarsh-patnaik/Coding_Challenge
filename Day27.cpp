#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    bool spacePrinted = true;

    for (int i = 0; i < s.size();)
    {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB")
        {
            if (!spacePrinted)
            {
                cout << ' ';
                spacePrinted = true;
            }
            i += 3;
        }
        else
        {
            cout << s[i];
            spacePrinted = false;
            i++;
        }
    }
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
