#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        int len = s1.length();
        for(int i=0; i<len-1; i++){
            if(i == 0){
                s2 +=s1[i];
            }
            if(s1[i] == s1[i-1]){
                s2 +=s1[i];
                i++;
            }
        }
        s2 +=s1[len-1];
        cout<<s2<<endl;

    }

    return 0;
}
