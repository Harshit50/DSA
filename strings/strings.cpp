#include<iostream>
using namespace std;

int main(){

    string s0;
    string s1 = "hello";
    string s2("harshit");
    string s3(s1);
    string s4 = s2;

    char a[]={'a','b','c','\0'};
    string s5(a);


    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    //checking string is empty or not
    if(s0.empty()){
        cout<<"s0 is empty"<<endl;
    }
    else{
        cout<<"s0 is not empty"<<endl;
    }

    //append a string
    cout<<"s0 after appending --> ";
    s0.append("i love suc");
    cout<<s0<<endl;
    s0 += " forever";
    cout<<"string s0 after appending again --> ";
    cout<<s0<<endl;

    //remove or erase content of a string 
    cout<<"length of s0 before clearing --> "<<s0.length()<<endl;
    s0.clear();
    cout<<"length of s0 after clearing --> "<<s0.length()<<endl;

    //comparing strings
    string s6 = "Apple";
    string s7 = "Mango";
    cout<<s7.compare(s7)<<endl; //return 0 when equal else returns value either <0 or >0 
    
    //overloaded operator(>)
    if (s7 > s6){
        cout<<"mango is lexographically greater"<<endl;
    }
    else{
        cout<<"mango is smaller"<<endl;
    }
    cout<<s7[1]<<endl;  //gives the element at index 1

    //Find substrings
    string s8 = "I want to have apple juice";
    cout<<"string 8 --> "<<s8<<endl;
    int idx = s8.find("apple");
    cout<<"apple is at index "<<idx<<endl;

    //remove a word from the string
    string word = "apple";
    int len = word.length();
    s8.erase(idx,len+1);
    cout<<"string 8 after removal of apple --> "<<s8<<endl;
    
    //Iterating over all the characters in the string
    for (int i = 0; i < s7.length(); i++){
        cout<<s7[i]<<":";   //giving endl here will cause each element to print in different lines due to loop
    }
    cout<<endl;
    
    //iterators
    for(auto it=s7.begin(); it!=s7.end(); it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    //for each loop iteration
    for(auto c:s7){
        cout<<c<<".";
    }
    cout<<endl;
}