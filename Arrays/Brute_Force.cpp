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

//brute force approach O(n^3)
bool largestSubarraySum(int a[],int n)
{
    int largest_sum = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraySum = 0;
            for(int k=i;k<j;k++)
            {
                subarraySum += a[k];
            }

            largest_sum = max(subarraySum,largest_sum);
        }
    }

    return 0;
}

// prefix approach O(n^2)
bool largestSubarraySum1(int a[],int n)
{
    int prefix[100] = {0};
    prefix[0] = a[0];
    for(int i=0;i<n;i++)
    {
        prefix[i] = prefix[i-1]+a[i];
    }
    int largest_sum = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];

            largest_sum = max(subarraySum,largest_sum);
        }
    }

    return 0;
}


// kadane algo O(n)
int maximum_subarray_sum(int a[],int n)
{
    int cs=0;
    int largest = 0;

    for(int i=0;i<n;i++)

    {
        cs = cs + a[i];
        if(cs<0)
        cs=0;
    }
    largest = max(largest,cs);
    return largest;
}

int main()
{
VED
int array[] = {1,-2,5,-65,-32,1,-9,8};
int n = sizeof(array)/sizeof(int);

bool index = largestSubarraySum(array,n);
bool index = largestSubarraySum1(array,n);

cout<<index<<endl;
return 0;
}
