#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--){
    int ballon = 2;
    cin>>n;
    cin>>s;
    sort(s.begin(), s.end());
    for (int i=1;i<n;i++){
        if(s[i]==s[i-1])
            ballon+=1;
        else
            ballon+=2;
    }
    cout<<ballon<<endl;
    }
    return 0;
}
