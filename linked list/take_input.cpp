//taking input
node* takeInput(){
    int d;
    cin>>d;
    node*head=NULL;
    
    while(d!=-1){
        insertAtHead(head ,d);
        cin>>d;
    }
    return head;
}


int main(){
    node*head = takeInput();
    print(head);
}