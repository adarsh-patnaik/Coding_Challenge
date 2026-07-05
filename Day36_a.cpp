#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n , k;
    cin >> n >> k;

    ll oddC = (n + 1) / 2;
    ll ans = 0;

    if(k <= oddC){
        ans = 2 * k - 1;
    }
    else{
        ans = 2 * (k - oddC);
    }

    cout << ans << endl;
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
