//merging two sorted linked list

node* merge(node*a, node*b){
    //base cases
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    //taking new head pointer
    node* c;
    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);
    }
    else{
        c = b;
        c->next = merge(a,b->next);
    }
    return c;
}


int main(){
    node*head;
    node*head2;
    cin>>head>>head2;
    
    cout<<"first linked list ";
    cout<<head<<endl;
    cout<<"second linked list ";
    cout<<head2<<endl;

    node* newhead = merge(head, head2); 
    cout<<newhead<<endl;
}