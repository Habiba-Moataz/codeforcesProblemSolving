#include<iostream>
using namespace std;
int main() {
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int a[n],odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1)
                odd++;
            else
                even++;
        }
        int numbers =odd+even;
        if(odd==0)
            cout<<"NO"<<endl;
        else if((even==0)&&(x%2==0))
            cout<<"NO"<<endl;
        else{
            if(odd&1){
                if(numbers>=x)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else{
                if(((odd-1)+even)>=x)
                     cout<<"YES"<<endl;
                else
                     cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
