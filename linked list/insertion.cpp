#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    //constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

//passing pointer by reference -> so that actual head in the main also changes
void insertAtHead(node*&head, int d){

    if(head==NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head = n;
}

//this is call by value 
void print(node*head){

    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

int length(node*head){
    int cnt=0;
    while (head!=NULL){
        cnt++;
        head = head->next;
    }
    return cnt;    
}

void insertAtTail(node*&head, int data){
    if (head==NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertAtMiddle(node*head,int data, int p){
    //corner case
    if(head==NULL or p==0){
        insertAtHead(head,data);
    }
    else if(p>length(head)){
        insertAtTail(head,data);        
    }
    else{   
        //taking jump of p-1
        int jump=1;
        node*temp = head;
        while (jump<=p-1){
            temp=temp->next;
            jump++;
        }
        //create a new node
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }         
}

//deletion 
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

//recursive reverse of linked list

/*node* recReverse(node*head){
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
*/

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

//Floyd's cycle algorithm

bool floydcycle(node*head){
    node*slow = head;
    node*fast = head;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast==slow){
            return true;
        }
    }   
    return false;    
}

int main(){
    node*head;
    cin>>head;
    cout<<head<<endl;

    head = mergesort(head); 
    cout<<head<<endl;

    //print(head);

/*  insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    print(head);

    insertAtMiddle(head,7,3);
    cout<<"after inserting at middle"<<endl; //this means insert 7 after 3 nodes
    print(head);

    insertAtTail(head, 5);    
    cout<<"after inserting at tail"<<endl;
    print(head);

    deletehead(head);
    cout<<"after deleting head"<<endl;
    print(head);

    deletetail(head);
    cout<<"after deleting at head"<<endl;
    print(head);

    int key;
    cout<<"insert element to be found -> ";
    cin>>key;
    if(searchRecursive(head,key)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
*/


}

/* linked list is done with dyanamic memory allocation so that 
when new head is inserted then the old head doesn't get deleted 
this is why it is not done with static memory allocation */ 