#include<iostream>
using namespace std;
int main()
{
    int n,one=0,two=0,three=0,four=0,s=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)
            one++;
        else if(arr[i]==2)
            two++;
        else if(arr[i]==3)
            three++;
        else
            four++;
    }
    s+=four;
    if(three>=one){
        s+=three;
        one=0;
    }
    else{
        s+=three;
        one=one-three;
    }
    if(two&1){
        s+=two/2;
        s+=1;
        if(one>2){
            one-=2;
            s=s+one/4;
            if(one%4!=0)
                s+=1;
        }
    }
    else{
        s+=two/2;
        s=s+one/4;
        if(one%4!=0)
            s+=1;
    }
    cout<<s;
    return 0;
}
