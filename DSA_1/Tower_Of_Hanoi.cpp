# include <iostream>
using namespace std ;

void TOH(int n , char A , char B , char C){

    if (n == 0){
        return ;
    }
    TOH(n-1,A, C, B) ;
    cout <<" Move from " << A << " to " << C << endl ;
    TOH(n-1, B , A, C) ;
    // cout << endl ;
}

int main(){

    char A , B , C ;
    
    TOH(3,'A', 'B' ,'C' );

    return 0 ;
}