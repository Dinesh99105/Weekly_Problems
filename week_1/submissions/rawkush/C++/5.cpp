#include <iostream>

using namespace std;

void swap(int &x1,int &v1,int &x2,int &v2){
int tempx=x1;
int tempv=v1;
x1=x2;
v1=v2;
x2=tempx;
v2=tempv;
}


int main() {
 int x1, v1, x2, v2;
 int dist;
  cout<<" for first Kangaroo  "<<endl;
  cout<<"initial dist ";
  cin>>x1;
  cout<<"distance per jump(velocity):";
  cin>>v1;
  cout<<" for second Kangaroo  "<<endl;
  cout<<"initial dist: ";
  cin>>x2;
  cout<<"distance per jump(velocity)";
  cin>>v2;
	
  if(x1>x2)
	swap(x1,v1,x2,v2);
 
if(x2>x1&& v2>v1)
{cout<<"no";
return 0; 
 }
  //for( int i=0;(x1-x2)>=0;i++){
  
 dist= (x2*v1)/(v1-v2);
  cout<< "number of steps = "<<(dist/v1);
  cout<< "yes" 	;
   

return 0;
}
