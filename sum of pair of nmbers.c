/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a[100],i,n,j,result;
printf("enter no. of elements in array:");
scanf("%d",&n);
printf("enter required sum:");
scanf("%d",&result);
printf("enter array elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==result)
        {
            printf("%d+%d = %d\n",a[i],a[j],result);
        }
    }
}
    return 0;
}
