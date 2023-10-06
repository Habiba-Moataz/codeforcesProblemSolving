#include<iostream>
using namespace std;

int main(){
    int t,n;
    string s = "codeforces",s1;
    cin>>t;
    while(t--){
        n=0;
        cin>>s1;
        for (int i=0; i<10; i++)
        {
            if(s1[i]!=s[i]){
                n++;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
