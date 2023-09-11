#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    char temp;
    if(s.size()== 1){
        cout << s ;
        return 0 ;
    }
    if(s.size()!= 1){
        for(int i=0 ; i<=s.size(); i=i+2){
        for(int j =0 ; j <=s.size()-2; j=j+2){
            if(s[j] > s[j+2]){
            temp = s[j];
            s[j]= s[j+2];
            s[j+2]=temp;
        }
        }
    }
    cout << s;
    return 0;
    }
}
