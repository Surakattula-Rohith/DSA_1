# include <iostream>
using namespace std ;


class Student{

public :
    
    string name ;
    int age ; 
    bool gender ;

    void printInfo(){
        cout <<"Name is   : " + name <<  endl ;
        // cout <<"Age is    : " + age  <<  endl ;
        cout <<"Gender is : "  ;
              if(gender == 1 )
                cout<< "male"<<  endl ;
               else 
               cout<< "female"<<  endl ;
        cout << endl ;
    }

    Student(){
        cout << "Default Constructor is called..!!!" << endl << endl  ;

    }

    //contructor
    Student(string s, int abc , bool ff ){
        name =  s ;
        age = abc ;
        gender = ff ;
    }

    bool operator == (Student &a ){
        if(name == a.name && age == a.age && gender == a.gender){
            return true ;
        }else
            return false ;
    }

    ~Student(){
        cout << "Destructor called " <<endl ;
    }

};


int main(){

    // Student a ;
     
    // a.name = "Rohith" ;
    // a.age = 22 ;
    // a.gender = 0 ;

    // cout << "Name is "+ a.name  << endl ;

    // Student arr[2] ;

    // arr[0].name =  " Kagada" ;
    // arr[0].age = 21 ;

    // arr[1].age = 54 ;

    // a.printInfo() ;
    // arr[0].printInfo() ;

    Student jj("Happy", 2222 , 0) ;
    jj.printInfo() ;

    Student b(jj) ;
    b.printInfo() ;

    if(jj == b){
        cout << "SAme" << endl ;
    }else{
        cout << "NOt Same ..!!" << endl ; 
    }

    Student a ; 


    return 0 ;
}