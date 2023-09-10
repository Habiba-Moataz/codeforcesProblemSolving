#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s1 , s2;
    cin >> s1;
    int x=0;
 
    for(int i=0 ; i<=s1.size()-1; i++){
            s1[i]=tolower(s1[i]);
                if((s1[i] == 'a') || (s1[i] == 'e' )|| (s1[i] == 'i') || (s1[i] == 'o' )|| (s1[i] == 'u') || (s1[i] == 'y')){
                    continue;
                }
                else{
                    s2 += '.';
                    s2 += s1[i];
                }
        }
        cout<<s2;
    return 0;
}
