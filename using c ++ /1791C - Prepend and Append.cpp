#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,c;
    float n,x;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        cin>>s;
        x=ceil(n/2);
        int j=n-1;
        for(int i=0;i<x;i++){
            if(s[i]!=s[j])
                c+=2;
            else
                break;
            j--;
        }
        cout<<n-c<<endl;
    }
    return 0;
}
