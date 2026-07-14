#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;

    map<string,int> mpp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(mpp.find(s) == mpp.end()){
            cout << "OK\n";
            mpp[s] = 1;
        }
        else{
            cout << s + to_string(mpp[s]) << endl;
            mpp[s]++;
        }
    }
    
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
