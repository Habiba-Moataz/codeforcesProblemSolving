#include<iostream>
using namespace std;

int main()
{
    int n,chest=0,biceps=0,bak=0,exercise;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
      chest=a[0];
    }
    else if(n==2){
      chest=a[0];
      biceps=a[1];
    }
    else {
        for(int i=0;i<n;i+=3){
            chest+=a[i];
        }
        for(int i=1;i<n;i+=3){
            biceps+=a[i];
        }
        for(int i=2;i<n;i+=3){
            bak+=a[i];
        }
    }
    exercise=max(chest,max(biceps,bak));
    if(chest==exercise){
        cout<<"chest"<<endl;
    }
    else if(biceps==exercise){
        cout<<"biceps"<<endl;
    }
    else{
        cout<<"back"<<endl;
    }
    return 0;
}
