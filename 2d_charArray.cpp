#include<iostream>
using namespace std;

int main(){

    char a[10][10];
    a[0][0] = 'A';
    
    char b[][10] = {{'a','b','c','\0'},{'d','e','f','\0'}};

    char c[][10] = {"abcd","efgh","hello","harshit"};


    cout<<a[0][0]<<endl;
    cout<<b[1]<<endl;
    cout<<c[2]<<endl;
    cout<<c[3]<<endl;

    return 0;
    
}