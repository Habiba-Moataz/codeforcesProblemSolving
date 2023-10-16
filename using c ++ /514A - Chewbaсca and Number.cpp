#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string s;
    long long n;
    cin>>s;
    n=s.length();
    long long a[n];
    for(int i=0;i<s.length();i++){
        a[i]=s[i]-'0';
    }
    for(int i=0;i<s.length();i++){
        if((a[i]>4)&&(a[i]!=9))
            a[i]=9-a[i];
        if((a[i]==9)&&(i!=0))
            a[i]=9-a[i];
    }
    for(int i=0;i<s.length();i++){
        cout<<a[i];
    }
    return 0;
}
