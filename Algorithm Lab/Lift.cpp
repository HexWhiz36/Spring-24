#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        c=(abs(a-b)*4)+(a*4)+19;
        cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}