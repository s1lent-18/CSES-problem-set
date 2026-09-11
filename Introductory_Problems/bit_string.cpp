#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,ans=1;
    ll MOD=1e9+7;
    cin >> n ;
    for (int i = 0; i < n; i++) 
    {
        ans = (ans * 2) % MOD;
    }
    cout << ans << "\n";
    return 0;
}