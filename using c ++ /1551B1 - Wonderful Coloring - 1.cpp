#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n=0,c=0;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        for(int i=0;i<s.length();i++){
            if((s[i]==s[i+1])&&(n<1)){
                n++;
                c++;
            }
            else if(s[i]!=s[i+1]){
                c++;
                n=0;
            }
        }
        cout<<c/2<<endl;
    }
    return 0;
}
