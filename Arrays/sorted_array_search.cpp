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

bool search(int arr[][4], int n, int m, int key)
{
    int col = 0;

    if(key < arr[0][0] or key>arr[n-1][m-1])
    {
        return 0;
    }

    int i=0, j=m-1;
    while(i<n and j>=0)
    {
        if(arr[i][j]==key)
        {
            return 1;
        }
        else if(arr[i][j]>key)
        {
            j--;
        }
            else{
                i++;
            }
    }

    return 0;
    
}

int main()
{
VED
int arr[][4] = {{10,20,30,40}, 
                {15,25,35,45},
                {27,29,37,48},
                {32,33,39,50}};

    int n=4, m=4, key = 33;

    cout<<search(arr,n,m,key);
return 0;
}
