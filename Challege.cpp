#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x,y,N;
    float s,z,d;
    scanf("%d %d",&x,&y);
    z = (x+y)/2.00000;
    N=abs(x-y)+1;
    if(x<y)
    {
        for(;x<=y;x++)
        {
            printf("%d ",x);
            s = pow((x-z),2);
            d = d+s;
        }
            printf("\n");
            printf("Average = %.1f\n",z);
    }
    else
    {
        for(;x>=y;x--)
        {
            printf("%d ",x);
            s=pow(x-z,2);
            d = d+s;
        }
            printf("\n");
            printf("Average = %.1f\n",z);
    }
    printf("SD = %.2f\n",sqrt(d/(N-1)));
    return 0;
}