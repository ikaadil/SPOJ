#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n1,n2,ans;
    cin>>t;
    while(t--)
    {
        char s1[1000],s2[1000],s3[1000];
        char c;
        cin>>s1>>c>>s2>>c>>s3;
        n1=0,n2=0,ans=0;
        if(strstr(s1,"machula"))
        {
            int l1,l2;
            l1=strlen(s2);
            l2=strlen(s3);
            for(int i=0; i<l1; i++)
                n1=n1*10+(s2[i]-'0');
            for(int i=0; i<l2; i++)
                n2=n2*10+(s3[i]-'0');
            ans=n2-n1;
            printf("%d+%s=%s\n",ans,s2,s3);
        }
        else if(strstr(s2,"machula"))
        {
            int l1,l2;
            l1=strlen(s1);
            l2=strlen(s3);
            for(int i=0; i<l1; i++)
                n1=n1*10+(s1[i]-'0');
            for(int i=0; i<l2; i++)
                n2=n2*10+(s3[i]-'0');
            ans=n2-n1;
            printf("%s+%d=%s\n",s1,ans,s3);
        }
        else if(strstr(s3,"machula"))
        {
            int l1,l2;
            l1=strlen(s1);
            l2=strlen(s2);
            for(int i=0; i<l1; i++)
                n1=n1*10+(s1[i]-'0');
            for(int i=0; i<l2; i++)
                n2=n2*10+(s2[i]-'0');
            ans=n2+n1;
            printf("%s+%s=%d\n",s1,s2,ans);
        }

    }
    return 0;
}
