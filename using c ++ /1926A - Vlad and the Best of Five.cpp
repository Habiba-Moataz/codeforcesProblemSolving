#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t,a,b;
    string s;
    cin >> t;
    for (int i=0;i<t;i++){
        cin>>s;
        a=0;
        b=0;
        for(int j =0;j<5;j++){
            if (s[j]=='A'){
                a++;
            }
            else if (s[j]=='B'){
                b++;
            }
            if (a==3){
                cout <<"A"<<endl;
                break;
            }
            if (b==3){
                cout <<"B"<<endl;
                break;
            }
        }
    }
    return 0;
}
