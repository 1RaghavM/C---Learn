#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char letter;
    int i;

    ifstream reader("poem.txt");

    if( !reader ){
        cout << "Error opening input file" << endl;
        return -1;
    }

    for(i=0;! reader.eof(); i++){
        reader.get( letter );
        cout << letter;
    }

    reader.close();
    cout << "iterations" << i << endl;


    return 0;
}
