#include<iostream>
using namespace std;

int main(){

    int t,n,arr[300];
    cin>>t;
    while(t--){
        cin>>n;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n / 2; i++) {
            cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
        }
        if (n%2!=0){
            cout<<arr[n/2];
        }
        cout<<endl;
    }
    return 0;
}
