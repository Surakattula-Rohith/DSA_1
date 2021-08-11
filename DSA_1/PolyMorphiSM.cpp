# include <iostream>
using namespace std ;

class base{
    public:
    virtual void print(){
        cout << "Base class print" << endl ;
    }
    void display(){
        cout << "Base class display" << endl ;
    }
};
class child : public base {
    public :
    void print(){
        cout << "child class print" << endl ;
    }
    void display(){
        cout << "child class display" << endl ;
    }
};

int main(){

    base *baseptr ;
    child d_obj ;

    baseptr = &d_obj ;

    baseptr->print();
    baseptr->display() ;

    return 0 ;
}