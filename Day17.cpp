#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] > s2[i])
        {
            cout << 1 << endl;
            return;
        }
        else if (s1[i] < s2[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << 0 << endl;
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
