#include <iostream>
using namespace std;

float ftoC( float degrees = 32.0 );

int main(){
    float fahrenheit, centigrade;

    cout << "Enter a Fahrenheit temperature:\t";
    cin >> fahrenheit;

    centigrade = ftoC( fahrenheit );
    cout << fahrenheit << "F is " << centigrade << "C";
    cout << endl << "Freezing point: " << ftoC() << "C";

    return 0;
}

float ftoC( float degreesF ){
    float degreesC = ((5.0/9.0) * ( degreesF - 32.0 ));
    return degreesC;
}



