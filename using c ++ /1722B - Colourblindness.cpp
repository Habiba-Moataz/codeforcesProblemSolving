#include<iostream>

using namespace std;

int main()
{
    int t,n;
    string s1,s2;
    bool same;
    cin>>t;
    while(t--){
        same=true;
        cin>>n;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            if(s1[i]=='G')
                s1[i]='B';
            if(s2[i]=='G')
                s2[i]='B';
        }
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                same=false;
                break;
            }
        }
        if(same)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
