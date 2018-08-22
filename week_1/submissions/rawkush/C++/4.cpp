#include<iostream>
using namespace std;

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
for(int i=0;i<5;i++)
cin>>x[i];

int small,big;
small=findMinPosition(x);
big=findMaxPosition(x);

for(int i=0;i<5;i++){

if( i!=big){
minSum=minSum+x[i];
}

if(i!=small){
maxSum=maxSum+x[i];
}

}

cout<<"max sum is"<<maxSum;
cout<<"\nmin sum is"<<minSum;

return 0;
}
