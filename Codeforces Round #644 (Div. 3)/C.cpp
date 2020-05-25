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
    ll int e=0;
    ll int o=0;
    sort(v.begin(), v.end());
    for(auto &e1:v)
        {if(!(e1&1))
            e++;
        else
            o++;}
    bool flag=true;
    if(e%2==0)
       {cout<<"YES"<<endl;
        return;}
    else
    {
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0 && v[i+1]%2!=0 && v[i+1]-v[i]==1)
                {cout<<"YES"<<endl;
                flag=false;
                break;
                }
            if(v[i+1]%2==0 && v[i]%2!=0 && v[i+1]-v[i]==1)
                {cout<<"YES"<<endl;
                flag=false;
                break;}
        }
        if(flag==true)
        cout<<"NO"<<endl;
    }
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
