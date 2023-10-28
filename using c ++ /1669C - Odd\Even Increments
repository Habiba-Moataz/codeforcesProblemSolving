#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,odd_odd=0,odd_even=0,even_odd=0,even_even=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(i&1){
                if(a[i]&1)
                    odd_odd++;
                else
                    odd_even++;
            }
            else{
                if(a[i]&1)
                    even_odd++;
                else
                    even_even++;
            }
        }
        if((odd_odd+even_even==n)||(odd_even+even_odd==n)||(odd_odd+even_odd==n)||(odd_even+even_even)==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
