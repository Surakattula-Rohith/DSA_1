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

void insertTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n ; 
        return ;
    }else{
        node* temp = head ;
        while(temp->next != NULL){
            temp = temp->next ;
        }temp->next = n ;
    }
}
void display(node* head){
    node* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" -> " ;
        temp = temp->next ;
    }cout <<"NULL" << endl ;
}

bool CycleDetection(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next!=NULL ){
        slow = slow->next ;
        fast = fast->next->next ;
        if(fast == slow){
            return true; 
        }
    }return false ;
}


void Reverse(node* &head){
    node* prev = NULL;
    node* current = head ;
    node* nexts = head->next ;

    while(true){
        current->next = prev ;
        if(nexts == NULL){
            head = current ;
            return ;
        }
        prev = current ;
        current = nexts ; 
        nexts = nexts->next ;

    }
}

node* ReverseRecursive(node* &head){

    if(head == NULL || head->next == NULL ){
        return head ;
    }

    node* newHead = ReverseRecursive(head->next) ;
    head->next->next = head ; 
    head->next = NULL ;

    return newHead ;
}

node* reverseK(node* &head , int k){
    node* prev = NULL;
    node* current = head ;
    node* nextptr ;

    int count = 0 ;
    while(current != NULL && count<k ){
        nextptr = current->next ;
        current->next = prev ;
        prev = current ;
        current = nextptr   ;
        count++;
    }

    if(nextptr != NULL){
        head->next = reverseK(nextptr,k);
    }

    return prev ;
}

void deletion(node* head , int val){
    if(head == NULL){
         return;
    }
    if(head->data == val){
        node* temp = head->next ;
        delete head;
        head = temp ;
        
        return ;
        
    }
    node* temp = head ;

    while(temp->next->data!=val){
        temp = temp->next ;
    }
    node* a = temp->next ;
    temp->next=temp->next->next;
    delete a ;
}

int main(){
    node* head = NULL ;

    insertTail(head,1) ;
    insertTail(head,2) ;
    insertTail(head,3) ;
    insertTail(head,4) ;
    insertTail(head,5) ;

    display(head) ;
    deletion(head,3) ;
    display(head) ;

     
    // display(ReverseRecursive(head)) ;

    int k = 2 ;
    display(reverseK(head,2)) ;
    return 0 ;
}