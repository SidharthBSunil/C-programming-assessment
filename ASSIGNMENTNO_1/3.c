/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=5;
    for(int i=0;i<=n;i++)
    {
        
        for(int j = 5; j >= 0+i; j--)
            printf(" ");
        for(int j=0;j<=i*2;j++)
        {
            //printf("\t");

            printf("*");
        }
            
        
        printf("\n");
         
         
    }
    
}