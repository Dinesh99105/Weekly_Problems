/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>

int findMinPosition(int x[]){

int small=x[0];
int pos=0;
for(int i=0;i<5;i++)
if( small>x[i])
{
small=x[i];
pos=i;
}

return pos;
}

int findMaxPosition(int x[]){

int biggest=x[0];
int pos;
for(int i=0;i<5;i++)
if( biggest<x[i])
{
biggest=x[i];
pos=i;
}
return pos;
}

int main(){
int minSum=0,maxSum=0;
int x[5];
int i;
for(i=0;i<5;i++)
scanf("%d",&x[i]);

int small,big;
small=findMinPosition(x);
big=findMaxPosition(x);

for( i=0;i<5;i++){

if( i!=big){
minSum=minSum+x[i];
}

if(i!=small){
maxSum=maxSum+x[i];
}

}

printf("max sum is %d",maxSum);
printf("\nmin sum is %d",minSum);

return 0;
}
