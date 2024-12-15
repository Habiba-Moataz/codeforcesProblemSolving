#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long int s,n;
    cin>>s>>n;
    int arr [n][2];
    for (int i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] > arr[j][0]) {
                // Swap the entire row for strength and bonus
                swap(arr[i][0], arr[j][0]);
                swap(arr[i][1], arr[j][1]);
            }
        }
    }
    for (int i =0; i<n;i++){
        if (s <=arr[i][0]){
            cout << "NO"<<endl;
            return 0;
        }
        else {
            s+= arr[i][1];
        }
    }
    cout <<"YES"<<endl;
    return 0;
}
