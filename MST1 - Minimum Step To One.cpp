#include<bits/stdc++.h>
using namespace std;
int  n=20000000;
int a[2*10000000+2];
void  dp()
{
    a[1]=0;
    for(int i=2; i<=n; i++)
    {
         if(i%3==0)a[i]=min(a[i-1]+1,a[i/3]+1);
        else if(i%2==0)a[i]=min(a[i-1]+1,a[i/2]+1);
        else a[i]=1+a[i-1];
    }


}
int main()
{
    int t,cs=1;
    dp();
    cin>>t;
    while(t--)
    {
        int nu;
        cin>>nu;

        cout<<"Case "<<cs++<<": "<<a[nu]<<"\n";
    }
}
