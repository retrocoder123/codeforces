#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, c=0;
        cin>>n;

        for(int i=0; i<n; ){
            c++;
            if(c%3!=0 && c%10!=3){
                i++;
            }
        }

        cout<<c<<endl;
    }
}
