#include<iostream>
using namespace std;

int main(){

    char c;
    cin>>c;
    

    if(islower(c)){
        cout<<"lowercase"<<endl;
    }
    else if(isupper(c)){
        cout<<"UUPERCASE"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}