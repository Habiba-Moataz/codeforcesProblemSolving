#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        int a,b;
        cin>>s;
        a = s[0]-'0';
        b = s[2]-'0';
        cout<<a+b<<endl;
    }
}
