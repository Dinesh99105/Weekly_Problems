#include <iostream>
using namespace std;

void check_win(int n[3][3]);
void char_loc(int c,int i,int j);
int main()
{
    char_loc(0,1,3);

    return 0;
}

void char_loc(int c , int i , int j){
    char n[i][j] = c ;
    int col =3;
     n[i][col];
    check_win(n);
};

void check_win(int n[3][3])
{
cout<<n[1][3];
}
