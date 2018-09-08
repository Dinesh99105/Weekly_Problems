#include <iostream>

using namespace std;


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
	

if((x1 - x2) % (v2 - v1) == 0){
cout<<"yes";
cout<<endl<<"number of steps"<<(x1 - x2) / (v2 - v1);
}else
cout<<"no";

return 0;
}
