#include<iostream>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--){
        long int n;
        char d;
        string s1,s2="";
        cin>>n>>d;
        cin>>s1;
        for(int i=0;i<n;i++){
            if(s1[i]<d){
                s2+=d;
                for(int j=i;j<n;j++){
                    s2+=s1[j];
                }
                break;
            }
            else{
                s2+=s1[i];
            }
        }
        if(s2.length()==s1.length())
            s2+=d;
        cout<<s2<<endl;
	}
    return 0;
}
