#include <iostream>
using namespace std;
int main() {
  int ice[5] = {6,4,5,1,5};
  int sum = 18;
  int Em=0;
  int Ep=0;
  // int motu = 2;
  // int patlu = 1;
  // int motu_patlu = 2;
  // int ques = 3;
  int Lmo = 14;
  int Lpa = 7;
  int i=0;
  while(Lmo >0 ){
       Em++;
     Lmo = Lmo-ice[i];
     i++;
  }
  int j=1;
  while(Lpa >0 ){
       Ep++;
    Lpa = Lpa-ice[5-j];
     j++;
  }
  if(Ep==Em){
    // cout<<"yes";
    Ep--;
  }
  // cout<<i<<j<<"\n";
  cout<<Em<<'\n'<<Ep;
}