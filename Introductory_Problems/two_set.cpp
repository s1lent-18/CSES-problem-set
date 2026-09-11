#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll n;
    cin >> n;
    vector<int> sumA;
    vector<int> sumB;
    ll target;
    ll total=n*(n+1)/2;
    ll current_sum=0;
    if(total%2 != 0)
    {
        cout<<"NO\n";
        return 0;
    }
    else
    {
        cout<<"YES"<<"\n";
        target=total/2;
        for(int i=n;i>0;i--)
        {
            if(current_sum+i<=target)
            {
                sumA.push_back(i);
                current_sum+=i;
            }
            else
            {
                sumB.push_back(i);
            }
        }
        cout<< sumA.size()<<"\n";
        for(int x:sumA)
        {
            cout<<x<<" ";
        }
        cout<< sumB.size()<<"\n";
        for(int x:sumB)
        {
            cout<<x<<" ";
        }
        return 0;
    }
    
}