#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of values --> ";
    cin>>n;
    int m = 2*n-1;
    int arr[50][50];
    
    for(i=0; i<m; i++){
        for(j=i; j<=m-i-1; j++){        //to take care of position in array
            arr[i][j] = n;              //storing value in first row
        }

        for(j=i+1; j<=m-i-1; j++){
            arr[j][m-i-1] = n;          //storing the value in last column
        }
        for(j=m-2-i; j>=i; j--){
            arr[m-i-1][j] = n;          //storing the value in the last row
        }
        for(j=m-1-i; j>i; j--){
            arr[j][i] = n;              //storing for first column
        }
        n--;                            // decreasing the value of input and increasing the value of i for further array pattern
    }
    
    // Here is the Pattern 

    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            cout<<" "<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}