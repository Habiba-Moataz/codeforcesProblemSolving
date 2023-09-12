#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    int n , x=0 ;
    cin >> n;
    cin >> s;
 
    for(int i=0 ; i<=s.size()-1; i++){
        if(s[i]== s[i+1]){
            x++;
        }
    }
        cout << x;
    return 0;
}
