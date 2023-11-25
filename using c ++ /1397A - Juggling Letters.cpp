#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=1;
        string str,s="";
        bool eql=true;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s;
            str+=s;
        }
        sort(str.begin(), str.end());
        for(int i=0;i<str.length();i++){
            if(str[i]==str[i+1])
                x++;
            else{
                if(x%n==0)
                    x=1;
                else{
                    eql=false;
                    break;
                }
            }
        }
        if(eql)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
