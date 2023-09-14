#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int a =0,b=1000;
    int arr[1000];
    cin>>n>>m;
    for(int i =0 ;i<n;i++){
        for (int j =0 ; j<m;j++){
            if((i+1)%4==0){
                if(j!=0)
                    cout<<'.';
                else
                    cout<<"#";
            }
            else if((i%2==1)&&(j!=m-1))
                cout<<'.';
            else
                cout<<"#";
        }
        cout <<endl;
    }
    return 0;
}
