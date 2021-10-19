/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,n,a[100],count=0;
printf("enter number of elements in array:");
scanf("%d",&n);
printf("enter elements of array:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            ++count;
        }
    }
    if(count%2==0)
    {
        printf("%d even times\n",a[i]);
    }
    else
    {
        printf("%d is odd times repeated\n",a[i]);
    }
}

    return 0;
}
