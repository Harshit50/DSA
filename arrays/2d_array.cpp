#include<iostream>
using namespace std;

int main(){

    int a[100][100] = {0};

    int m,n;     //asking for no of rows(m) and columns(n)
    cin>>m>>n;

    int val = 1; //iterating over the 2d array

    for(int row=0; row<=m-1; row++){
        for (int col = 0; col<=n-1; col++){
            a[row][col] = val;
            val += 1;
            cout<<a[row][col]<<" ";
        }
        
        cout<<endl;        
    }

    
    return 0;
}