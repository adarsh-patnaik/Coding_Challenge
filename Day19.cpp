#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string num;
    getline(cin, num);
    int count = 0;

    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '4' || num[i] == '7')
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "NO\n";
        return;
    }
    bool flag = true;
    while (count > 0)
    {
        int digit = count % 10;

        if (digit != 4 && digit != 7)
        {
            flag = false;
            break;
        }

        count /= 10;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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
