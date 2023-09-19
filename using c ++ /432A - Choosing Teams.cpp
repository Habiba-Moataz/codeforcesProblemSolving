#include<iostream>
 using namespace std;
 int main()
 {
     int n,k,y,x;
     cin>>n>>k;
     for(int i=0;i<n;i++){
        cin>>y;
        if(y+k<=5)
            x++;
     }
     cout<<x/3<<endl;
     return 0;
 }
