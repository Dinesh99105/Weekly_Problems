#include<stdio.h>
//using namespace std;

int main(){

int x,i,n,p;
printf("enter the number of lines");
scanf("%d",&x);

for(i=1;i<=x;i++){

n=i;
	for(  p=i;p<=x;p++)
	{

		printf(" ");
	}

	for(p=0;p<2*i-1;p++){
		
		printf("%d",n);
		if(p<=i/2)
		n++;
		else
                n--;

		if(i==1)
		break;
	}

printf("/n");

}
return 0;
}
