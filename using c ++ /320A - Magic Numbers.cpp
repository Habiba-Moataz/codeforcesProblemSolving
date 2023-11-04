#include<iostream>
using namespace std;
int main() {
    int four =0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(i==0){
            if(s[i]!='1'){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else if((s[i]=='4')&&(four<=1)){
                four++;
        }
        else if(s[i]=='1'){
                four=0;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}
