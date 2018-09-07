#include<iostream>
using namespace std;


bool isVowel(char a){
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='n')
    return true;
if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='N')
    return true;

return false;
}


int main(){

string s;
cout<<"enter the word :  ";
cin>>s;

bool prevWordConsonant=false; // if true it means prev word was a consonant
for(int i=0; i<s.size();i++){

  if(!isVowel(s[i])&&prevWordConsonant){
    cout<<"not bernalese";
    return 0;
  }else
  if(isVowel(s[i])&&prevWordConsonant){
   prevWordConsonant=false;
  }else
 if(!isVowel(s[i])&&!prevWordConsonant){
    prevWordConsonant=true;
  }

}

cout<<"berlanese";

return 0;
}
