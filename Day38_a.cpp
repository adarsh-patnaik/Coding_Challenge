#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    b = a;
    sort(b.begin(), b.end(), greater<int>());

    map<int, int> rank;

    for (int i = 0; i < n; i++)
    {
        if (rank.find(b[i]) == rank.end())
        {
            rank[b[i]] = i + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << rank[a[i]] << " ";
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
