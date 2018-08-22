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

int x[5];
for(int i=0;i<5;i++)
cin>>x;




return 0;
}
