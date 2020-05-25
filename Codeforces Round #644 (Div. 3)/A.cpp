#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod=1e9+7;
using namespace std;
void solve()
{
    ll int a,b;
    cin>>a>>b;
    ll int mini=min(a,b);
    mini+=mini;
    ll int maxi=max(mini, max(a,b));
    cout<<maxi*maxi<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

