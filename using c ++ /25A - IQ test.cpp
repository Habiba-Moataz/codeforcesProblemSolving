#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    int x=0,lastIEven,lastIOdd;
    cin>>n;
    for(int i =0 ;i<n;i++){
        cin >> arr[i];
    }
    for(int i =0 ;i<n;i++){
        if(arr[i]%2==0){
                x++;
                lastIEven=i+1;
        }
        else{
            x--;
            lastIOdd=i+1;
        }
    }
    if(x>0)
        cout<<lastIOdd<<endl;
    else
        cout<<lastIEven<<endl;
    return 0;
}
