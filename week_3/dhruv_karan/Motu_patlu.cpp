#include <iostream>
using namespace std;
int main() {
  int n, input,Lpa ;
  cout<<"entert the length of array"<<"\n";
  cin>>n;
//   int ice[n] = {6,4,5,1,5};

    int ice[n];
      int sum = 0;
  for (int i=0 ; i<n;i++){
    cout<<"enter the num";
    cin>>input;
    ice[i] = input;
    sum +=input;
    if(i == n-1){
       cout<<"enter the speed of patu eats";
       cin>>Lpa;
    }
  }
  int Lmo = Lpa*2;
  int Em=0;
  int Ep=0;
  int i=0;
  
  while(Lmo >0 ){
       Em++;
     Lmo = Lmo-ice[i];
     Lmo <0 ? -1*Lmo : Lmo;
     i++;
  }
  int j=1;
  while(Lpa >0 ){
       Ep++;
    Lpa = Lpa-ice[n-j];
    Lpa <0 ? -1*Lpa : Lpa;
     j++;
  }
  if(Ep==Em){
    Ep--;
  }
  // cout<<i<<j<<"\n";
  cout<<Em<<'\n'<<Ep;
}
