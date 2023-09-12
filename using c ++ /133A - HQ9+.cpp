#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s1;
    cin >> s1;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='H'||s1[i]=='Q'||s1[i]=='9'){
            cout<<"YES"<<endl;
            return 0 ;
        }
    }
    cout<< "NO" <<endl;
    return 0;
}
