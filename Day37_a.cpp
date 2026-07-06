#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n);

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        nums[i] = x;
    }

    int count = 1;
    int maxCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= nums[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;
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
