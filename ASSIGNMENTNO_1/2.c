/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>

int main()
{
    unsigned int registerpart1,duplicateregister;
    printf("enter the number \n");
    scanf("%u",&registerpart1);
    duplicateregister=registerpart1; //for do operation in one line
    // doing operation by step by step
    registerpart1 ^=1;
    printf("after toggling in first bit is %u\n",registerpart1);
    registerpart1|=(1<<2);
    printf("after setting third bit %u\n",registerpart1);
    registerpart1&=~(1<<5);
    printf("after clearing sixth bit %u\n",registerpart1);
    //doing operation in one line
    printf("  \n");
    duplicateregister=(((duplicateregister^(1<<0))|(1<<2))&~(1<<5));
     printf("after doing operation in one line %u\n",duplicateregister);



}
  
    