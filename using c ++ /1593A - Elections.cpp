#include<iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int arr[3],mx,c=0;
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        mx=max({arr[0],arr[1],arr[2]});
        for(int i=0;i<3;i++){
            if(arr[i]==mx){
               c++;
            }
        }
        for(int i=0;i<3;i++){
            if((arr[i]==mx)&&(c==1))
                cout<<0<<"   ";
            else if(arr[i]==mx)
                cout<<1<<"  ";
            else
                cout<<mx-arr[i]+1<<"    ";
        }
        cout<<endl;
    }
    return 0;
}
