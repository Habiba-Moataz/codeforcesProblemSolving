#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,one=0,zero=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
            n=min(zero,one);
        }
        if(n&1)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    return 0;
}
