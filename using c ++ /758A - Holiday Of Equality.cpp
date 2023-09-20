#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n ,arr[100],m=0,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m=max(m,arr[i]);
    }
    for(int i=0;i<n;i++){
        x=x+(m-arr[i]);
    }
    cout<<x<<endl;
    return 0 ;
}
