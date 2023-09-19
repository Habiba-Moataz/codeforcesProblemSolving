#include<iostream>
 using namespace std;
 int main()
 {
     int n,arr[1000],Sereja=0,Dima=0;
     cin>>n;
     int a=0,b=n-1;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=0;i<n;i++){
        if(i%2==0){
            if(arr[a]>arr[b]){
                Sereja=Sereja+arr[a];
                a++;
            }
            else{
                Sereja=Sereja+arr[b];
                b--;
            }
        }
        else{
            if(arr[a]>arr[b]){
                Dima=Dima+arr[a];
                a++;
            }
            else{
                Dima=Dima+arr[b];
                b--;
            }
        }
     }
     cout<<Sereja<<' '<<Dima<<endl;
     return 0;
 }
