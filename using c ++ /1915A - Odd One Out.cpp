#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,a,b,c;
    cin >> t;
    int arr [t][3];
    for (int i=0;i<t;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
        cin>>arr[i][2];
    }
    for (int i=0;i<t;i++){
            if((arr[i][0]!=arr[i][1])&&(arr[i][0]!=arr[i][2]))
                cout<<arr[i][0]<<endl;
            else if (arr[i][0]!=arr[i][1])
                cout << arr[i][1]<<endl;
            else
                cout << arr[i][2]<<endl;
    }
    return 0;
}
