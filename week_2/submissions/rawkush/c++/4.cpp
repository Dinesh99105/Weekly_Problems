#include <iostream>
using namespace std;


int productOFPrime(int num){

int pn=1,n=0;

for(int x=0;x<num+1;){

  int  i, m=0, flag=0;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          flag=1;
          break;
      }
  }
else
  if (flag==0)
      {
          pn=pn*n;
          x++;
      }

}

return pn;

}

int nextPrime(int x){


}


int main()
{
    int x;
    cout<<"enter the number";
    cin>>x;
    int y=productOFPrime(x);
    cout<<"number to be added "<<nextPrime(y)-y;

  return 0;
}
