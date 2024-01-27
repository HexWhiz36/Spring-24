#include<bits/stdc++.h>
using namespace std;

int pal(int n)
{
    int b=0;
    while(n>0)
    {
        b = (b * 10) + (n%10);
        n = n / 10;
    }
    return b;
}

int main()
{
    int t,n;
    cin>>t;
    for(int  i=1;i<=t;i++)
    {
        cin>>n;
      
     
     if(n==pal(n))
     {
        cout<<"Case "<<i<<": "<<"Yes"<<endl;
     }
     else{
        cout<<"Case "<<i<<": "<<"No"<<endl;
     }
    }
    
    return 0;
}