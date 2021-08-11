#include <iostream>
using namespace std ;

class A {
    public:
        int a ;
        void funA(){
            cout << "In Func A\n" ;
        }
    private:
        int b ;
        void funB(){
            cout << "In Func B\n" ;
        }
    protected:
        int c ;
        void funC(){
            cout << "In Func C\n" ;
        }
};

int main(){

    A obj ;
    obj.funA();
    // obj.funB() ;




    return 0; 

}