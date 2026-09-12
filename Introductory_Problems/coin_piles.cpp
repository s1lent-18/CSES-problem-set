#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool emptyingpiles(ll a ,ll b)
{
    if((a+b)%3==0 && 2*min(a,b)>=max(a,b))
    {
        return true;
    }
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    ll a,b;
    cin >> t;
    vector<pair<ll,ll>> heights;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        heights.push_back({a,b});
        
    }
    for(const auto& p : heights)
    {
        if(emptyingpiles(p.first,p.second)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
