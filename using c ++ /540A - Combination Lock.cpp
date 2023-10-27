#include<iostream>

using namespace std;
int main() {
    int n,c=0,l;
    string s,so;
    cin>>n;
    cin>>so;
    cin>>s;
    for(int i=0;i<n;i++){
        l=abs(so[i]-s[i]);
        if(l>5)
            c=c+(10-l);
        else
            c=c+l;
    }
    cout<<c<<endl;
}
