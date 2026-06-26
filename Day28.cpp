#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        ans[num - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
