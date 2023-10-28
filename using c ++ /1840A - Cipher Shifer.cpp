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
        char c=s[0];
        for(int i=1;i<n;i++){
            if(s[i]==c){
                cout<<s[i];
                c=s[i+1];
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}
