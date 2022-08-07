//search operation -> linear search is only done 
bool search(node*head, int key){
    node*temp = head;
    while(temp!=NULL){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
}

//recursive search operation
bool searchRecursive(node*head, int key){
    if(head==NULL){
        return false;
    }
    //recursive case check at head, if not found then search remaining list
    if(head->data==key){
        return true;
    }    
    else{
        return searchRecursive(head->next, key);
    }
}