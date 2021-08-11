# include <iostream>
using namespace std ;

class node{
    public:
        int data ;
        node* next ;
        node(int val){
            data = val ;
            next = NULL ;
        }
};

void insertHead(node* &head,int val){

    node* a = new node(val);

    if(head == NULL){
        a->next = a ;
        head = a ;
        return ;

    }

    node* temp = head ;
    while(temp->next != head){
        temp = temp->next ;
        
    }
       
    temp->next = a ; 
    a->next = head ;
    head = a ;
}

void insertTail(node* &head,int val){

    if(head == NULL){
        insertHead(head,val) ;
        return ;
    }
    node* temp = head ;
    while(temp->next != head){
        temp = temp->next ;
        
    }
    node* a = new node(val);
       
    temp->next = a ; 
    a->next = head ;
}

void display(node* head){
    node* temp = head ;
    do{
        cout<<temp->data<<" -> " ;
        temp = temp->next ;
    }while(temp != head);
    cout << head->data << endl ;
}

int main(){
    node* head = NULL ;
    for(int i = 0 ; i < 10 ; i++){
        if(i%2 == 0)
          insertTail(head,i) ;
        else
            insertHead(head,i) ;
    }
    display(head) ;
    return 0 ;
}