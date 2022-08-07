//deletion in linked list 

void deletehead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head->next;
    delete head;
    head = temp;
}

void deletetail(node*&head){
    node*temp = head;
    node*prev = NULL;
    while (temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }   
    delete temp;    
    prev->next = NULL;
    return;
}