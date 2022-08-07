//operator overloading -> cout in linked list gives the address og the head 
//so to let cout print the linked list we have to make a function for >> and << operator

ostream& operator<<(ostream &os, node*head){
    print(head);
    return os;    
}

istream& operator>>(istream &is, node*&head){
    head = takeInput();
    return is;
}



int main(){
    node*head;
    node*head2;
    cin>>head>>head2;
        
    cout<<head<<head2;
}