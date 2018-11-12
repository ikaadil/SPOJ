#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool adu(ll i)
{
    if(i==1)
        return 0;
    else if(i==2)
        return 1;
    else if(i%2==0)
        return 0;
    else
    {
        ll v=sqrt(i);
        for(ll j=3;j<=v;j+=2)
        {
            if(i%j==0)
                return 0;
        }
        return 1;
    }
}

int main()
{
    ll n,m,cnt=0;
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld",&m,&n);
        for(ll i=m;i<=n;i++)
        {
            if(adu(i))
                printf("%lld\n",i);
        }
        printf("\n");

    }
    return 0;
}
