#include<iostream>

using namespace std;
int main() {
    string s,cards[5];
    cin>>s;
    for(int i=0;i<5;i++)
        cin>>cards[i];
    for(int i=0;i<5;i++){
        if((s[0]==cards[i][0])||(s[1]==cards[i][1])){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}
