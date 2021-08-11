# include <iostream>
using namespace std ;

class stack{
    int* arr ;
    int top ;

    # define n 100 

    public:
        stack(){
            arr = new int[n];
            top = -1 ;
        }
        void push(int x){
            if( top == n-1){
                    cout<< "Stack Overflow" << endl ;
                    return ;
            }
            top++ ;
            arr[top] = x ;    

        }

        void pop(){
            if(top == -1){
                cout<< "Stack is Empty "<< endl ;
                return ;
            }
            top-- ;
        }

        int topElement(){
            if(top == -1){
               cout<< "Stack is Empty "<< endl ;
                return -1 ; 
            }
            return arr[top] ;
        }

        bool isEmpty(){
            if(top == -1){
                return true ;
            }
            return false ;
        }

        void display(){
            for(int i = 0 ; i < top ; i++){
                cout<<arr[i]<<" " ;
            }
        }

};

int main(){
    stack St ;
    St.push(1);
    St.push(2);
    St.push(3);
    St.push(4);

    St.display() ;

    return 0 ;
}