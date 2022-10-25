#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define pi pair<int, int>
#define pl pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define VED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound

using namespace std;
typedef long long int ll;
typedef long int li;

void solve()
{
    ll n;
    cin>>n;
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }

    int m = INT_MIN;
    for(auto i:mp)
    {
        m = max(m,i.second);
    }

    if(m==0)
    {
        cout<<0<<endl;
}

else
{
    cout<<ceil(log2(m))<<endl;
}
}

int main()
{
VED
int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}
