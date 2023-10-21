#include<iostream>
#include<cmath>

using namespace std;
int main() {
    int n,x=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
       if(s[i]=='0')
            x++;
       else
            x--;
    }
    cout<<abs(x);
    return 0;
}
