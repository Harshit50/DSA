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

    //wave print
    for(int col=0; col<n; col++){
        if(col%2==0){   // column is even - top to down
            for(int row=0; row<m; row++){
                cout<<a[row][col];
            }
        }
        else{           //column is odd - down to top
            for(int row=m-1; row>=0; row--){
                cout<<a[row][col];
            }
        }
    }    
    return 0;
}