/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>
#include<stdlib.h>
int nlargestnumber(int arr[],int n, int threshold)
{
        int largest;
        while(threshold>0)
        {   
            largest=arr[0];
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
        return largest;
}

int main()
{
    int n,threshold=2,largest,*ptr;
    //ptr=(int *)malloc(sizeof(int));
    printf("enter the numbers of elements");
    scanf("%d",&n);
     ptr=(int *)malloc(n*sizeof(int));
    printf("pls enter the numbers");
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&ptr[i]);
    }
    int threshold_copy=threshold;
    int result=nlargestnumber(ptr,n,threshold);
    printf("%d nd largest number in the array is %d\n",threshold_copy,result);
    
}