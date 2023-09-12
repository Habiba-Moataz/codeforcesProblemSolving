#include <iostream>
using namespace std;
 
int main()
{
    int n,a,b,arr[10000],c;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a>>b;
        if(a%b==0)
            arr[i]=0;
        else {
            c=a%b;
            arr[i]=b-c;
        }}
    for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
 
    return 0;
}
