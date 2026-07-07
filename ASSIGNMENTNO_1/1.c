/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>

int main()
{
    int arr[20],n,threshold=3,largest;
    printf("enter the numbers of elements");
    scanf("%d",&n);
    printf("pls enter the numbers");
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter which last number to find ");
    scanf("%d",&threshold);
    int threshold_copy=threshold;
  
    while(threshold>0)
    {   largest=arr[0];
        for(int i=0;i<=n-1;i++)
        {
            if(largest<arr[i])
            {
                largest=arr[i];
                
            }
       
        }
        for(int i=0;i<=n-1;i++)
        {
            if(largest==arr[i])
            {
                arr[i]=0;
            }

        }
        threshold--;
    }
    /*
    largest=arr[0];

    for(int i=0;i<=n-1;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
            temp=i;
        }
       
    }*/
    
    printf("%d nd largest number in the array is %d\n",threshold_copy,largest);
    
}