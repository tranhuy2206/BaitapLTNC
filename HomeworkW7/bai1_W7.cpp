#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int x, int left, int right)
{
    int mid = (left+right)/2;
    if(a[mid]==x)
    {
        return mid;
    }
    else if(a[mid] > x)
    {
        return BinarySearch(a,x,left,mid-1);
    }
    else if(a[mid] < x)
    {
        return BinarySearch(a,x,mid+1,right);
    }
    return -1;
}

int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << BinarySearch(a,x,0,n-1);

}
