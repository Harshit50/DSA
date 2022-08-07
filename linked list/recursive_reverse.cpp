//the order of this is O(N^2)

node* recReverse(node*head){
    if(head->next == NULL or head==NULL){
        return head;
    }
     node* shead = recReverse(head->next);

     node* temp = shead;
     while(temp->next!=NULL){
        temp = temp->next;
     }
     head->next = NULL;
     temp->next = head;
     return shead;
}

//writing this code makes the order O(N)

node* recReverse(node*head){
    if(head->next == NULL or head==NULL){
        return head;
    }
     node* shead = recReverse(head->next);

     //node* temp = head->next;
     //temp->next = head;
     //instead of this two line we can also write 

     head->next->next = head;
     head->next = NULL;
     return shead;
}     


int main(){
    node*head;
    cin>>head;
    cout<<head;

    head = recReverse(head);
    cout<<head;
}