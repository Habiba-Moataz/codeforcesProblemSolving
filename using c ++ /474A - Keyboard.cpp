#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c ;
    string s2;
    cin>>c;
    cin>>s2;
    switch (c) {
        case 'L':
            for(int i=0;i<s2.length();i++){
                for(int j=0;j<s1.length();j++){
                    if(s2[i]==s1[j]){
                        s2[i]=s1[j+1];
                        break;
                    }
                }
            }
            break;
        case 'R':
            for(int i=0;i<s2.length();i++){
                for(int j=0;j<s1.length();j++){
                    if(s2[i]==s1[j]){
                        s2[i]=s1[j-1];
                        break;
                    }
                }
            }
            break;
            }
        cout<<s2;
    return 0;
}
