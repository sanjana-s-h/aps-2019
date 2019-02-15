#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    unsigned int i,j,sum,k=0,comb_length,q;
    unsigned int m[5];
    unsigned int a[30];
//First no- the final sum
//Second no the combination of values to test
    scanf("%d%d",&sum,&comb_length);
//Read the combination values
    for(i=0;i<comb_length;i++)
    {
        scanf("%d",&m[i]);
    }
    //scanf("%d%d%d",&m1,&m2,&m3);

    sum=sum+1;
    memset(a,0,sum*sizeof(a[0]));
    a[0]=1;

    for (k=0;k<comb_length;k++)
    {
    for(i=0,j=m[k];i<sum-m[k];i++,j++)
    {
     //   for(j=m[k];j<n;j++)
           if(a[i]>0)
           {
               a[j]++;
           }
    }
    }
    printf("%d ",a[sum-1]);

return 0;
}
