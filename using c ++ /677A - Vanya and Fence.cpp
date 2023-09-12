#include <iostream>
using namespace std;
 
int main()
{
    int n,h;
    int x=0;
    int arr[1000];
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    for(int i=0;i<n;i++){
        if(arr[i]>h)
            x+=2;
        else
            x+=1;
        }
    cout << x;
    return 0;
 
}
