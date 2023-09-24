#include <iostream>
using namespace std;

int main()
{
    int n,p=2,q=2,x=1;
    long long  arr[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0)
            if(arr[i]!=arr[i-1])
                x++;
    }
    cout<<x<<endl;
    return 0;
}
