#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while (t--)
    {
        int i = 0;

        while (i < n - 1)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i += 2;
            }
            else
            {
                i++;
            }
        }
    }

    cout << s << '\n';
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
    // cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}