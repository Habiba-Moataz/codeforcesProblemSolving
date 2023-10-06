#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n;
    string s = "abcdefghijklmnopqrstuvwxyz",s1;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s1;
        sort(s1.begin(), s1.end());
        for (int i=0; i<26; i++)
        {
            if(s1[n-1]==s[i]){
                cout<<i+1<<endl;
                break;
            }

        }
    }
    return 0;
}
