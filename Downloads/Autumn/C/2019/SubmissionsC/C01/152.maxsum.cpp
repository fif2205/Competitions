#include<iostream>
#include<cstdio>
using namespace std;
long long n,k,i,j,p,q,maxa[100001],maxb[100001],ans,a[100001],b[1001],d[100001],maxd;
bool fl;
int main()
{
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=k; i++)
    {
        scanf("%d",&b[i]);
    }
    d[1]=a[1];
    for(i=2; i<=n; i++)
    {
        maxd=-9999999;
        fl=0;
        for(j=1; j<=k; j++)
        {
            if(b[j]>=i)continue;
            p=d[i-b[j]];
            if(p>maxd)maxd=p,fl=1;
            //cout<<i<<" "<<p<<endl;
        }
        if(!fl)continue;
        d[i]=a[i]+maxd;
        //cout<<d[i]<<" ans "<<i<<endl;
    }
    maxa[0]-9999999;
    for(i=1; i<=n; i++)
    {
        maxa[i]=max(maxa[i-1],d[i]);
        //cout<<maxa[i]<<" ";
    }
    //cout<<endl;
    fill(d+1,d+n+1,0);
    d[n]=a[n];
    for(i=n-1; i>=1; i--)
    {
        maxd=-9999999;
        fl=0;
        for(j=1; j<=k; j++)
        {
            if(i+b[j]>n)continue;
            p=d[i+b[j]];
            if(p>maxd)maxd=p,fl=1;
            //cout<<i<<" "<<p<<endl;
        }
        if(!fl)continue;
        d[i]=a[i]+maxd;
        //cout<<d[i]<<" ans "<<i<<endl;
    }
    maxb[n+1]=-9999999;
    for(i=n; i>=1; i--)
    {
        maxb[i]=max(maxb[i+1],d[i]);
        //cout<<maxb[i]<<" ";
    }
    for(i=1;i<=n;i++)
    {
        p=maxa[i];q=maxb[i+1];
        //cout<<p<<" "<<q<<endl;
        if(p+q>ans)ans=p+q;
    }
    cout<<ans;
    return 0;
}
/**
9 2
3 2 6 6 0 2 4 5 5
3 2
*/
