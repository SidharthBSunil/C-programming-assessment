/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>

int main()
{
    int arr[20],n,secondlast=2,temp;
    printf("enter the numbers of array");
    scanf("%d",&n);
    printf("pls enter the numbers");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    int largest=arr[0];
    while(secondlast < 0)
    {
    for(int i=0;i<=n-1;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
            temp=i;
        }
       
    }
    arr[temp]=0;
    secondlast--;
    }
    printf("second largest number is %d\n",largest);
    
}