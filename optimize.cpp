#include <iostream>
using namespace std;

int computeFactorials( int, int );
inline int factorial( int n )
{return ( n ==1 ) ? 1 : ( factorial(n-1)*n);}

int main(){
    computeFactorials( 1, 8);
    return 0;
}

int computeFactorials( int num, int max ){
    cout << "Facotrial of " << num << ":";
    cout << factorial(num) << endl;
    num++;
    if ( num > max ) return 0;
    else computeFactorials( num, max );
}

