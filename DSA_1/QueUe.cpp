# include <iostream>
using namespace std ;

class queue{
    int * arr ;
    int front , back ;

# define n 1000 

    public:
        queue(){
            arr = new int[n] ;
            back = -1 ;
            front = -1 ;
        }  
    void enqueue(int x) {
        if(back == n-1){
            cout << "Queue full" ;
            return ;
        }
        if( front = -1){
            front++ ;
        }
        back++ ;
        arr[back] = x ;        

    }     
    void dequeue(){
        if(front == -1 || back<front){
            cout << "Empty Queue" ;
            return  ;
        }
        front++ ;
    }
    int peek(){
        if(front == -1 || back<front){
            cout << "Empty Queue" << endl ;
            return -1 ;
        }else 
            return arr[back] ;
    }

    bool empty(){
        if(front== -1 || back<front){
            return true ;
        }return false ;
    }


};

int main(){

    queue q ;

    q.enqueue(8) ;
    cout << q.empty() << endl ;
    q.dequeue();
    cout << q.peek() <<endl ;
    q.empty() ;


    return 0 ;
}