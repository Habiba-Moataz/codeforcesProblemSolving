#include<iostream>
using namespace std;
int main()
{
    int n,j=0;
    string s,sFinal="";
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        sFinal+=s[i];
        i+=j;
        j++;
    }
    cout<<sFinal<<endl;
    return 0;
}
