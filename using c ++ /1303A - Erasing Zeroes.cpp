#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.length();
        int a[len],j=0,zero=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                a[j]=i+1;
                j++;
            }
        }
        for(int i=1;i<j;i++){
            zero=zero+(a[i]-a[i-1]-1);
        }
        cout<<zero<<endl;
    }
    return 0;
}
