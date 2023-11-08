#include<iostream>
using namespace std;
int main()
{
    long int q;
    char characters []= {'a', 'b','c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's','t', 'u', 'v', 'w', 'x', 'y', 'z'};
    cin>>q;
    while(q--){
        int n,j;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if((i==n-1)&&((s[i]=='1')||(s[i]=='2'))){
                j = (s[i] - '0');
                cout <<characters[j-1];
            }
            else if((s[i]=='1')&&(s[i+2]=='0')&&(s[i+3]!='0')){
                j = ((s[i] - '0')*10)+(s[i+1] - '0');
                cout <<characters[j-1];
                i+=2;
            }
            else if((s[i]=='2')&&(s[i+2]=='0')&&(s[i+3]!='0')){
                j = ((s[i] - '0')*10)+(s[i+1] - '0');
                cout <<characters[j-1];
                i+=2;
            }
            else {
                j = (s[i] - '0');
                cout <<characters[j-1];
            }
        }

        cout<<endl;
    }
    return 0;
}
