#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        arr[i] = x;
    }

    int maxTurns = 0;
    int maxTurnIdx = 0;

    for (int i = 0; i < n; i++)
    {
        int turns = (arr[i] + m - 1) / m;
        if (turns >= maxTurns)
        {
            maxTurns = turns;
            maxTurnIdx = i;
        }
    }

    cout << maxTurnIdx + 1 << endl;
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
