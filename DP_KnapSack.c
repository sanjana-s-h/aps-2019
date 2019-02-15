#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int i,j,k,n,m,n1,p=0,t,s=0,q;
    int b[20],w[20],v[20],a[10][10];
    memset(a,0,10*sizeof(a[0]));

    b[0]=0;
    w[0]=0;
    v[0]=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%d%d%d",&b[i],&w[i],&v[i]);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j>=w[i])
            {
                if(a[i-1][j]>((a[i-1][j-w[i]])+v[i]))
                {
                    a[i][j]=a[i-1][j];
                }
                else
                    a[i][j]=(a[i-1][j-w[i]])+v[i];
            }
            else
            {
                a[i][j]=a[i-1][j];
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    //Back_Track
    i=n;j=m;
    while(i>0 && j>0)
    {

        while(a[i][j]==a[i-1][j])
            i--;
        //a[i][j]=a[i-1][j];
        printf("*%d* ",b[i]);

        //i=i+1;
        if(a[i-1][j]>a[i-1][j-w[i]]+v[i])
        {
            i=i-1;
        }
        else
        {
            j=j-w[i];
            i=i-1;
        }
        printf("%d %d \n",i,j);
    }

}





