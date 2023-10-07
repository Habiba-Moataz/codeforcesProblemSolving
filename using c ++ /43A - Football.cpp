#include<iostream>

using namespace std;

int main(){
    int n,one=0,two=0;
    string s1,s2="";
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    s1=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==s1)
            one++;
        else if(a[i]==s2)
            two++;
        else{
            s2=a[i];
            two++;
        }
    }
    if(one>two)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;
    return 0;
}
