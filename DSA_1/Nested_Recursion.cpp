# include <bits/stdc++.h>
using namespace std ;

int fun(int n ){
    if(n > 100 ){
        cout << n << " " ;
        return (n-10) ;
    }else{
        cout << n << " " ;
        return fun(fun(n+11)) ;
    }
    return n ;

}

int main(){

    cout << fun(95) << endl ;
 
    return 0 ;
}