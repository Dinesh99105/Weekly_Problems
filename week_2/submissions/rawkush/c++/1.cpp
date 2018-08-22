#include<iostream>
using namespace std;

int main(){

int x;
cout<<"enter the number of lines";
cin>>x;

for( int i=1;i<=x;i++){

int n=i;
	for( int p=i;p<=x;p++)
	{

		cout<<" ";
	}

	for(int p=0;p<2*i-1;p++){
		
		cout<<n;
		if(p<=i)
		n++;
		
                if(p>i)
                n--;

		if(i==1)
		break;
	}

cout<<endl;

}
return 0;
}
