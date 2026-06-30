#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int l = 0;
    int r = n - 1;

    int sum1 = 0;
    int sum2 = 0;

    bool turn = true;

    while (l <= r)
    {
        int card;
        if (nums[l] > nums[r])
        {
            card = nums[l];
            l++;
        }
        else
        {
            card = nums[r];
            r--;
        }

        if (turn)
        {
            sum1 += card;
        }
        else
            sum2 += card;

        turn = !turn;
    }

    cout << sum1 << " " << sum2 << endl;
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
