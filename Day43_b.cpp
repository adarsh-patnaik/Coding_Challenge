#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;

    bool ok = true;

    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        for (char &c : s)
        {
            if (islower(c))
                c = toupper(c);
            else
                c = tolower(c);
        }
    }

    cout << s << endl;
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
