#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string pi="314159265358979323846264338327",s;
        int c=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]==pi[i])
                c++;
            else
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}
