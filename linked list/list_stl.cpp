#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> l1{1,2,3,4,5};
    list<string> l2{"apple","guava","mango","banana","orange"};
    
    //adding element at the last
    l2.push_back("pineapple");

    //sorting the list -> sort the list lexographically
    l2.sort();

    //reverse
    l2.reverse();

    //pop_front
    cout<<"first element is ->";
    cout<<l2.front()<<endl;
    l2.pop_front();

    //adding element to the front of the list
    l2.push_front("kiwi");

    //remove last element
    cout<<"last element is ->";
    cout<<l2.back()<<endl;
    l2.pop_back();

    //iterate over the list and print the list
    for(auto it=l2.begin(); it!=l2.end(); it++){
        cout<<(*it)<<" -> ";
    }
    cout<<endl;

    l2.push_back("carrot");
    l2.push_back("lemon");
    for(string s:l2){
        cout<<s<<" -> ";
    }
    cout<<endl;
    
    //remove a fruit by taking input from user
    string f;
    cout<<"element to be removed -> ";
    cin>>f;
    l2.remove(f);  
    for(string s:l2){
        cout<<s<<" -> ";
    }
    cout<<endl;

    //erase one or more element
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);
    for(string s:l2){
        cout<<s<<" -> ";
    }
    cout<<endl;

    //inserting one or more element
    cout<<"element is inserted "<<endl;
    it = l2.begin();
    it++;
    l2.insert(it,"apple");

    for(string s:l2){
        cout<<s<<" -> ";
    }
    cout<<endl;

    return 0;
}