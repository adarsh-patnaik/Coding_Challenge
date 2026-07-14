#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n;

    vector<ll> boys(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        boys[i] = x;
    }

    cin >> m;
    vector<ll> girls(m);
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        girls[i] = y;
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int answer = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(boys[i] - girls[j]) <= 1)
        {
            answer++;
            i++;
            j++;
        }
        else if (boys[i] < girls[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << answer << endl;
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
