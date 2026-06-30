#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll cost1 = n * a;
    ll cost2 = ((n + m - 1) / m) * b;
    ll cost3 = (n / m) * b + min((n % m) * a, b);

    cout << min({cost1, cost2, cost3}) << endl;
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
