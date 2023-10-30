#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='L')
                cout<<s[i];
            else if(s[i]=='R')
                cout<<s[i];
            else if(s[i]=='D')
                cout<<"U";
            else
                cout<<"D";
        }
        cout<<endl;
    }
    return 0;
}
