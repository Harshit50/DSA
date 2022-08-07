//finding midpoint of linked list

node* midpoint(node*head){
    if(head == NULL or head->next == NULL){
        return head;
    }

    node*slow = head;
    node*fast = head->next;

    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main(){
    node*head;
    cin>>head;
    cout<<head;

    node* mid = midpoint(head);
    cout<<mid->data<<endl;
} 