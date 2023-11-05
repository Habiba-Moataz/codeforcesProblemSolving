#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        int n,j=0;
        string s;
        cin>>n;
        cin>>s;
        string arr[n-1];
        for(int i=0;i<n-1;i++){
            arr[i]+=s[i];
            arr[i]+=s[i+1];
        }
        sort(arr,arr+n-1);
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1])
                j++;
        }
        cout<<j<<endl;
    }
    return 0;
}
