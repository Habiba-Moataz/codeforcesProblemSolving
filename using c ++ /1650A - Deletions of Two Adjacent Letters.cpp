#include<iostream>
using namespace std;
int main() {
    int t,n,x;
    cin>>t;
    while(t--){
        string s;
        bool found=false;
        char c;
        cin>>s;
        cin>>c;
        for(int i=0;i<s.length();i++)
            if((c==s[i])&&(i%2==0)){
                found =true;
                break;
            }
        if(found)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
