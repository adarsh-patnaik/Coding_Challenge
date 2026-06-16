#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        int a , b , c;
        cin >> a >> b >> c;

        if(a + b + c >= 2){
            counter++;
        }
    }
    cout << counter << endl;
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
    //cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
