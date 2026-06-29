#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    set<int> st;

    int p;
    cin >> p;
    for(int i = 0; i < p; i++){
        int x;
        cin >> x;
        st.insert(x);
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int y;
        cin >> y;
        st.insert(y);
    }

    if(st.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
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
