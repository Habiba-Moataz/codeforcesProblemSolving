#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    long t,n;
    cin>> t;
    while (t--)
    {
        cin >> n;
        if (n<=10){
            cout<<1<<endl;
            cout<<n<<endl;
            }
        else if(n<=100){
            if(n%10==0){
                cout<<1<<endl;
                cout<<n<<endl;
            }
            else{
                a=n%10;
                n=n-a;
                cout<<2<<endl;
                cout<<n<<"  "<<a<<endl;
            }
        }
        else if(n<=1000){
            if(n%100==0){
                cout<<1<<endl;
                cout<<n<<endl;
            }
            else if(n%10==0){
                a=n%100;
                n=n-a;
                cout<<2<<endl;
                cout<<n<<"  "<<a<<endl;
            }
            else{
                a=n%10;
                n=n-a;
                b=n%100;
                n=n-b;
                if(b>0){
                    cout<<3<<endl;
                    cout<<n<<"  "<<a<<"  "<<b<<endl;
                }
                else{
                    cout<<2<<endl;
                    cout<<n<<"  "<<a<<endl;
                }
            }
        }
        else if(n<=10000){
            if(n%1000==0){
                cout<<1<<endl;
                cout<<n<<endl;
            }
            else if(n%100==0){
                a=n%1000;
                n=n-a;
                cout<<2<<endl;
                cout<<n<<"  "<<a<<endl;
            }
            else if(n%10==0){
                a=n%100;
                n=n-a;
                b=n%1000;
                n=n-b;
                if(b>0){
                    cout<<3<<endl;
                    cout<<n<<"  "<<a<<"  "<<b<<endl;
                }
                else{
                    cout<<2<<endl;
                    cout<<n<<"  "<<a<<endl;
                }
            }
            else{
                a=n%10;
                n=n-a;
                b=n%100;
                n=n-b;
                c=n%1000;
                n=n-c;
                if(b>0 && c>0){
                    cout<<4<<endl;
                    cout<<n<<"  "<<a<<"  "<<b<<"  "<<c<<endl;
                }
                else if (b>0 && c==0){
                    cout<<3<<endl;
                    cout<<n<<"  "<<a<<"  "<<b<<endl;
                }
                else if (b==0 && c>10){
                    cout<<3<<endl;
                    cout<<n<<"  "<<a<<"  "<<c<<endl;
                }
                else{
                    cout<<2<<endl;
                    cout<<n<<"  "<<a<<endl;
                }
                }

    }
    }
    return 0;
}

