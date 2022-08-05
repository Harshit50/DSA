#include<iostream>
using namespace std;

void spiral_print(int a[][1000], int m, int n){

    int startrow=0;
    int startcol=0;
    int endrow=m-1;
    int endcol=n-1;

    while(startrow<=endrow and startcol<=endcol){
        //first row
        for(int i=startcol; i<=endcol; i++){
            cout<<a[startrow][i]<<" ";    
        }
        startrow++;

        //end column
        for (int i=startrow; i<=endrow; i++){
            cout<<a[i][endcol]<<" ";
        }
        endcol--;

        //bottom row
        for(int i=endcol; i>=startcol; i--){
            cout<<a[endrow][i]<<" ";
        }
        endrow--;

        //start column
        for(int i=endrow; i>=startrow; i--){
            cout<<a[i][startcol]<<" ";
        }
        startcol++;         
    }
}

int main(){

    int a[1000][1000] = {0};

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

    spiral_print(a, m, n);   

    return 0;

}