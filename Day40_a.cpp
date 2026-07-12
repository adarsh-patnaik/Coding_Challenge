#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;

    int len = s.length();
    int ans = 0;

    for (int i = 1; i < len; i++)
        ans += (1 << i);

    int value = 0;

    for (int i = 0; i < len; i++)
    {
        value = value * 2;

        if (s[i] == '7')
            value++;
    }
    ans += value + 1;
    cout << ans << endl;
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
