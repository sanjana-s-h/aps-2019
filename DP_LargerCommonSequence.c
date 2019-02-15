#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    unsigned int i,j,ns,nd,k=0,l=0;
    unsigned int a[10][10];
    unsigned char subsequnce[10],original_str[10];

    scanf("%s",subsequnce);
    scanf("%s",original_str);

    ns=strlen(subsequnce);
    nd=strlen(original_str);
    ns=ns+1;
    nd=nd+1;

    memset(a,0,10*sizeof(a[0]));

    for(i=1;i<ns;i++)
    {

        for(j=1;j<nd;j++)
        {
            if(subsequnce[i-1]==original_str[j-1])
            {
                k=a[i-1][j-1];
                a[i][j]=k+1;
                //a[i][j]=a[i-1][j-1]+1;
            }
            else
            {
                if(a[i-1][j]>=a[i][j-1])
                {
                    k=a[i-1][j];
                    a[i][j]=k;
                    //a[i][j]=a[i-1][j];
                }
                else
                {
                    k=a[i][j-1];
                    a[i][j]=k;
                    //a[i][j]=a[i][j-1];
                }
            }

        }
    }


    for(i=0;i<ns;i++)
    {
        for(j=0;j<nd;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


return 0;
}
