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

void print(int arr[][4], int n, int m)
{
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    while(startCol<=endCol and startRow<=endRow)
    {
        // start row
        for(int col = startCol ; col<=endCol; col++)
        {
            cout<< arr[startRow][col]<<" ";
        }

        //end col
        for(int row = startRow + 1; row<=endRow; row++)
        {
            cout<<arr [row][endCol]<<" ";
        }

        // end row
        for(int col = endCol -1; col>=startCol; col--)
        {
            if(startRow == endRow)
            {
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }

        //start col
        for(int row = endRow-1; row>=startRow+1; row--)
        {
            if(startCol==endCol)
            {
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }

        // update varialbles to point to inner spiral
        startCol++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
VED
int arr[][4] = { {1,2,3,4},
                {12,13,14,5},
                {11,16,15,6},
                {10,9,8,7}};
    
    int n=4, m=4;

    print(arr,n,m);
return 0;
}
