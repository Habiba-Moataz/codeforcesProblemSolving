#include<iostream>
using namespace std;

int main(){

    int t,n,arr[300],j,x;
    cin>>t;
    while(t--){
        j=0;
        cin>>n;
        for (int i = n; i > 0; i--){
            arr[j]=i;
            j++;
        }
        if(n&1){
            x=arr[n/2];
            arr[n/2]=arr[0];
            arr[0]=x;
        }
        for (int i = 0; i <n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
