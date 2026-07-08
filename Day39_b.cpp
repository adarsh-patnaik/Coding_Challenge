#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;

    if (n % 3 != 0)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> arr(n);
    vector<int> freq(8, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5 || x == 7)
        {
            cout << -1 << endl;
            return;
        }
        arr[i] = x;
        freq[arr[i]]++;
    }

    vector<vector<int>> ans;

    while (freq[4] > 0)
    {
        if (freq[1] == 0 || freq[2] == 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            ans.push_back({1, 2, 4});
            freq[1]--;
            freq[2]--;
            freq[4]--;
        }
    }

    while (freq[3] > 0)
    {
        if (freq[1] == 0 || freq[6] == 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            ans.push_back({1, 3, 6});
            freq[1]--;
            freq[3]--;
            freq[6]--;
        }
    }

    while (freq[6] > 0)
    {
        if (freq[1] == 0 || freq[2] == 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            ans.push_back({1, 2, 6});
            freq[1]--;
            freq[2]--;
            freq[6]--;
        }
    }
    for (int i = 1; i <= 7; i++)
    {
        if (freq[i] != 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (auto &v : ans)
    {
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
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
