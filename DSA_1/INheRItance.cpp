#include <iostream>
using namespace std ;

class A {
    public:
        int a ;
        void funA(){
            cout << "In Func A\n" ;
        }
};
// class B {
//     public:
//         int b ;
//         void funB(){
//             cout << "In Func B\n" ;
//         }
// };
class C  : public A { 
    public : 
        void funnnn(){
            cout << "In function C " ;
        }

};

int main(){

    C cobj ;
    cobj.funA() ;
    // cobj.funB();
    cobj.funnnn() ;
    
    return 0; 

}