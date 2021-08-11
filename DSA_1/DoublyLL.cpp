# include <iostream>
using namespace std ;

class node{
    public:
        int data ;
        node* prev ;
        node* next ;
        node(int val){
            data = val ;
            next = NULL ;
            prev = NULL ;
        }
};

void insertTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n ; 
        return ;
    }else{
        node* temp = head ;
        while(temp->next != NULL){
            temp = temp->next ;
        }
        temp->next = n ;
        n->prev = temp ; 
    }
}

void insertHead(node* &head, int val){
    node* temp = new node(val) ;
    temp->next = head ;
    head->prev = temp ;
    head = temp ;
    return ;

}

void deletion(node* &head , int val){
    node* temp = head;
    while(temp->data != val){
        temp = temp->next ;
    }
    if(temp->prev != NULL)
      temp->prev->next = temp->next ;
    if(temp->next != NULL)
        temp->next->prev = temp->prev ;
    delete temp;
}

void display(node* head){
    node* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" <-> " ;
        temp = temp->next ;
    }cout <<"NULL" << endl ;
}

int main(){
    node* head = NULL ;

    insertTail(head,1) ;
    insertTail(head,2) ;
    insertTail(head,3) ;
    insertTail(head,4) ;
    insertHead(head,5) ;

    display(head) ;

    deletion(head , 3) ;
    display(head) ;

    return 0 ;
}