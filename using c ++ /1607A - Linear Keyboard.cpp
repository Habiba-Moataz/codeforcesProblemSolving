#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    int t;
    string keyboard,s;
    cin>>t;
    while(t--){
        int n=0,k;
        cin>>keyboard;
        cin>>s;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<26;j++){
                if(s[i]==keyboard[j]){
                    if(i==0)
                        k=j;
                    else
                    {
                        n=n+abs(k-j);
                        k=j;
                    }
                }
            }
        }
        cout<<n<<endl;

    }
    return 0;
}
