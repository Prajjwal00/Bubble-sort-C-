/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int a[5] ={50,30,10,20,40};
int i=0,j=0;
int temp;
int length = sizeof(a)/sizeof(a[0]);
void main()
{
for(i=0;i<length-1;i++)
{
    for(j=0;j<length-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    
}
for(i =0;i<length;i++)
{
    printf("%d->",a[i]);
}

}