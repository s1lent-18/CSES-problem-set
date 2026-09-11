#include <bits/stdc++.h>
using namespace std;
using ll=long long;

/* ll factorial(ll n)
{
    if (n <= 1) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>> n;
    ll N=factorial(n);
    ll p;
    int count=0;
    while(N%10==0)
    {
        N=N/10;
        count++;
    }
    cout<<count;
    return 0;
} */

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n ;
    int count=0;
    int p =1;
    int q=5;
    while(n>=q)
    {
        count=count + n/q;
        p++;
        q=pow(5,p);
    }
    cout<<count;
}