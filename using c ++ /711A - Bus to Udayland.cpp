#include<iostream>
using namespace std;
int main()
{
    int n;
    bool emp=false;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if((arr[i][0]=='O')&&(arr[i][1]=='O')){
            arr[i][0]='+';
            arr[i][1]='+';
            emp=true;
            break;
        }
        else if((arr[i][3]=='O')&&(arr[i][4]=='O')){
            arr[i][3]='+';
            arr[i][4]='+';
            emp=true;
            break;
        }
    }
    if(emp){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<endl;
    }
    else
       cout<<"NO"<<endl;
    return 0;
}
