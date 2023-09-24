#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0,arr[100],y=0,j=0;
    cin>>n;
    for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            x=x+arr[i];
        }
    sort(arr, arr+n, greater<int>());
    while((y<x)||(y==x)){
        y=y+arr[j];
        x=x-arr[j];
        j++;
    }
    cout<<j<<endl;
    return 0;
}
