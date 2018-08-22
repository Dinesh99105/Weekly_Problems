#include<iostream>
using namespace std;

int findMinPosition(int x[]){

int small=x[0];
int pos;
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
return small;
}

int main(){
int minSum=0,maxSum=0;
int x[5];
for(int i=0;i<5;i++)
cin>>x;

int small,big;
smallminSum=findMinPosition(x);
big=findMaxPosition(x);

for(int i=0;i<5;i++){

if( i!=big){
minSum=minSum+a[i];
}

if(i!=small){
maxSum=maxSum+a[i]
}

}

cout<<"max sum is"<<maxSum;
cout<<"\nmin sum is"<<minSum;

return 0;
}
