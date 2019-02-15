#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    //unsigned long long int i,j,k,n,m,n1,p,t,s=0,q;
    //unsigned long long int a[20],c[20];

    long long int i,a[20],n,j,m,s,t;
    long long int tmax=0,max=0;

    /*scanf("%llu%llu%llu",&n,&k,&q);
    for(i=0;i<n;i++)
    {
       scanf("%llu",&a[i]);
    }*/
    scanf("%lli",&m);
    for(j=0;j<m;j++)
    {
        scanf("%lli",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lli",&a[i]);
        }
        tmax=0;
        max=0;
        s=0;
        t=-1000;
    for(i=0;i<n;i++)
    {
        tmax=tmax+a[i];
        if(tmax<0)
            tmax=0;
        if(max<tmax)
            max=tmax;

            if(a[i]>=0)
            {
                s=s+a[i];
            }
            else{
                if(a[i]>t)
                    t=a[i];
            }

    }
    if(s==0)
            {
                s=t;
                max=t;
               // printf("%lli ",s);
            }


    printf("%d ",max);
    printf("%d\n",s);
    }
}




