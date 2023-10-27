#include<iostream>
using namespace std;
int main() {
    string s;
    int c=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if (s[i]=='Q'){
            for(int j=i+1;j<s.length();j++){
                if (s[j]=='A'){
                    for(int k=j+1;k<s.length();k++){
                        if (s[k]=='Q'){
                            c++;
                        }
                    }
                }
            }
        }
    }
    cout<<c;
    return 0;
}
