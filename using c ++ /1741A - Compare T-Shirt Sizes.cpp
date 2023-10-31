#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--){
        string s1,s2;
        int n1,n2;
        char c1,c2;
        cin>>s1>>s2;
        n1=s1.length();
        n2=s2.length();
        c1=s1[n1-1];
        c2=s2[n2-1];
        if(c1==c2){
            if(n1==n2)
                cout<<"="<<endl;
            else if(((n1>n2)&&(c1=='L'))||((n1<n2)&&(c1=='S')))
                cout<<">"<<endl;
            else
                cout<<"<"<<endl;
        }
        else{
            if((c1=='L')||((c1=='M')&&(c2=='S')))
                cout<<">"<<endl;
            else
                cout<<"<"<<endl;

        }
    }

    return 0;
}
