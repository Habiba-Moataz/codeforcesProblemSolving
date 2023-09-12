#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int x=0;
    sort(s.begin(),s.end());
        for(int i=1 ; i<=s.size(); i++){
                if(s[i] != s[i-1]){
                    x++;
                }
        }
    if (x%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
