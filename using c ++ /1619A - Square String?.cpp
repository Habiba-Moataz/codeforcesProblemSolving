#include <iostream>
using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--){
        bool mirror=true;
        cin>>s;
        n=s.length();
        if(n&1){
            mirror=false;
        }
        else{
            int arr1[n/2],arr2[n/2],j=n/2;
            for(int i=0;i<n/2;i++){
                arr1[i]=s[i];
                arr2[i]=s[j];
                j++;
            }
            for(int i=0;i<n/2;i++){
                if(arr1[i]!=arr2[i]){
                    mirror=false;
                    break;
                }
            }
        }
            if(mirror)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}
