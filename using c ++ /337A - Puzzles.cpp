#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,mn=1000,dif;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<m-n+1;i++){
        dif=arr[i+n-1]-arr[i];
        mn=min(mn,dif);
    }
    cout<<mn<<endl;
    return 0;
}
