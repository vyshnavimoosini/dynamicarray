/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int len,big=0,i;
    printf("enter length of array:");
    scanf("%d",&len);
    ptr=(int*)malloc(len*sizeof(int));
   for(i=0;i<len;i++)
   {
       scanf("%d",&ptr[i]);
   }
   for(i=0;i<len;i++)
   {
       if(big<ptr[i])
       {
           big=ptr[i];
       }
       else
       {
           big=big;
       }
   }
   printf("%d",big);
    return 0;
}
