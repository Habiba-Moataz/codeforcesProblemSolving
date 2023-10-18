#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,n,b;
    string s;
    cin>>t;
    while(t--){
        b=0;
        cin>>s;
        n=s.length();
        if(n&1)
           cout<<"NO"<<endl;
        else{
            for(int i=0;i<n;i++)
                if(s[i]=='B')
                    b++;
            if(b==n/2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
