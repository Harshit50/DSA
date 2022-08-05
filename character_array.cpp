#include<iostream>
using namespace std;

int main(){
    int b[] = {1, 2, 3};
    cout<<b<<endl;  //gives the address of the content in the array

    char a[] = {'a','b','c','d','e'}; //doesn't terminate with a null character , null has to be given
    cout<<a<<" "<<sizeof(a)<<endl;  //gives the content of the array

    char s[] = "hello"; //char array can also be defined like this
    cout<<s<<" "<<sizeof(s)<<endl; //null character is included

    char c[10];
    cin>>c;
    cout<<c;

    return 0;
}