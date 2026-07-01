#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[maxIndex])
            maxIndex = i;

        if (a[i] <= a[minIndex])
            minIndex = i; 
    }

    int ans = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex)
        ans--;

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
