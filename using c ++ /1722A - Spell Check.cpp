#include<bits/stdc++.h>
using namespace std;

string sortString(string str)
{
   sort(str.begin(), str.end());
   return str;
}

int main()
{
    int t,n;
    string timur = "Timur",s;
    cin>>t;
    timur=sortString(timur);
    while(t--){
        bool eq=true;
        int i ,j=0;
        cin>>n;
        cin>>s;
        s=sortString(s);
        if(n!=5){
            cout<<"NO"<<endl;
        }
        else {
            for(i=0;i<5;i++){
                if(timur[i]!= s[j]){
                    eq=false;
                    break;
                }
                j++;
            }
            if(eq==false)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
