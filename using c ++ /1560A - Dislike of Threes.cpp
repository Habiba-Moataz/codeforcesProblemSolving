#include<iostream>
using namespace std;

int main()
{
    int arr [1001] ,j=0;
    int t ,k;
    for(int i = 1 ; i <= 1666 ; i++ )
    {
        if((i%3 != 0)&&(i%10 != 3))
            {
                arr[j] = i;
                j ++;
            }

        }
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<arr[k-1]<<endl;
    }
    return 0;
}
