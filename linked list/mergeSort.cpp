//sorting unsorted linked list by merge sort

node* mergesort(node*head){
    //base case
    if(head==NULL or head->next==NULL){
        return head;
    }

    //recursive cases
    //1. breaking the linked list from mid point
    node* mid = midpoint(head);
    node* a = head;
    node* b = mid->next;

    mid->next = NULL;

    //2. sorting the two lists recursively
    a = mergesort(a);
    b = mergesort(b);

    //3. merging the two lists 
    node* c = merge(a,b);
    return c;
}


int main(){
    node*head;
    cin>>head;
    cout<<head<<endl;

    head = mergesort(head); 
    cout<<head<<endl;
}