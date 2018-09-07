#include <iostream>
using namespace std;


int productOFPrime(int num){

int pn=1,n=2;

for(int x=0;x<num;){

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

  if (flag==0)
      {
          pn=pn*n;
          x++;
      }
n++;

}

return pn;

}

int nextPrime(int x){


  while(true){

  int  i, m=0, flag=0;
  x++;
  m=x/2;
  for(i = 2; i <= m; i++)
  {
      if(x % i == 0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
    {
      return x;
    }
}

return 0;
}


int main()
{
    int x;
    cout<<"enter the number ";
    cin>>x;

    int y=productOFPrime(x);

    cout<<"number to be added "<<nextPrime(y)-y ;

  return 0;
}
