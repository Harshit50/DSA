#include<iostream>
using namespace std;

int main(){
    int x = 10;
    float y = 10.5;

    cout<<"address of x is --> "<<&x<<endl;
    cout<<"address of y is --> "<<&y<<endl;

    char ch = 'A';
    cout<<&ch<<endl;  //will give A only because it doesn't work on character

    //explicit type casting from char to void*
    //this will give the address because we used void which can give A the datatype int or float
    cout<<"using void * the address of char A is --> "<<(void *)&ch<<endl; 

    // pointers

    int *xptr;
    xptr = &x; 
    // the pointer stores the address of x
    //* also works as a dereference operator therefor in o/p below it returns back the value of the bucket x

    cout<<"the pointer of x represents --> "<<xptr<<endl;
    cout<<*(xptr)<<endl;     //gives the bucket value of x = 10
    cout<<*(&x)<<endl;       // since &x is the address of x so, *&x will give bucket value of x = 10
    cout<<*(&xptr)<<endl;    //&xptr is address of xptr therefore *(&xptr) will give the value of xptr = address of x  
    cout<<&(*xptr)<<endl;    //*xptr is the vbucket value of x so, &(*xptr) will give the address of x

    cout<<*(xptr) + 1<<endl;  //11
    cout<<*(xptr + 1)<<endl;  //gives the next address 
    

    cout<<&xptr<<endl;
    // double pointer
    int **xxptr = &xptr;
    cout<<xxptr<<endl;


    return 0;

}