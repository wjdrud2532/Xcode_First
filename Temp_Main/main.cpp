#include <stdio.h>
#include <algorithm>

int f(int p,int q)
{
    if(q==0)
        return p;
    return f(q,p%q);
}
int main()
{
    int n,i,a[101]={0},res=0;
    int print[10000]={0},p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    std::sort(a,a+n);
    res=a[1]-a[0];
    for(i=2;i<n;i++)
        res=f(res,a[i]-a[0]);
    for(i=1;i*i<=res;i++)
        if(res%i==0)
        {
            if(i!=1)
                printf("%d ",i);
            if(i*i!=res)
                print[p++]=res/i;
        }
    for(i=p-1;i>=0;i--)
        printf("%d ",print[i]);
}

