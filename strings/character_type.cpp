#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    

    if(islower(ch)){
        cout<<"L"<<endl;
    }
    else if(isupper(ch)){
        cout<<"U"<<endl;
    }
    else{
        cout<<"I"<<endl;
    }
    return 0;
}