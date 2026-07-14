#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    int k1;
    cin >> k1;
    queue<int> q1;
    while (k1--)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    int k2;
    cin >> k2;
    queue<int> q2;
    while (k2--)
    {
        int x;
        cin >> x;
        q2.push(x);
    }

    set<pair<vector<int>, vector<int>>> vis;
    int moves = 0;

    while (!q1.empty() && !q2.empty())
    {
        // Store current state
        vector<int> v1, v2;

        queue<int> t1 = q1;
        while (!t1.empty())
        {
            v1.push_back(t1.front());
            t1.pop();
        }

        queue<int> t2 = q2;
        while (!t2.empty())
        {
            v2.push_back(t2.front());
            t2.pop();
        }

        if (vis.count({v1, v2}))
        {
            cout << -1 << '\n';
            return;
        }

        vis.insert({v1, v2});

        int a = q1.front();
        int b = q2.front();
        q1.pop();
        q2.pop();

        if (a > b)
        {
            q1.push(b);
            q1.push(a);
        }
        else
        {
            q2.push(a);
            q2.push(b);
        }

        moves++;
    }

    if (q1.empty())
        cout << moves << " " << 2 << '\n';
    else
        cout << moves << " " << 1 << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
