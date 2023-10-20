#include <iostream>
using namespace std;

int main()
{
    int n,a[1000],mx,mn,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    mx=a[0];
    mn=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            c++;
            mx=a[i];
        }
        if(a[i]<mn){
            c++;
            mn=a[i];
        }
    }
    cout<<c;
    return 0;
}
