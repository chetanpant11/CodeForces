#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod=1e9+7;
using namespace std;
void solve()
{
    ll int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mini=INT_MAX;
    for(int i=1;i<v.size();i++)
    {
        mini=min(mini,v[i]-v[i-1]);
    }
cout<<mini<<endl;
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

