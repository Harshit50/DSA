//reverse a linked list
void reverse(node*&head){
    node* c = head;
    node* p = NULL;
    node*n;

    while(c!=NULL){
        n = c->next;  //saving the next node
        c->next = p;  //making the current node point to prev

        //updating c and p and taking them 1 step forward
        p = c;
        c = n;
    }
    head = p;    
}



int main(){
    node*head;
    cin>>head;
    cout<<head;

    reverse(head);
    cout<<head;
}
