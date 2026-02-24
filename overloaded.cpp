#include <iostream>
#include <string>
using namespace std;

class Dog{
int age, weight;
string color;

public:
    void bark() { cout << "WOOF!" << endl;}
    void bark( string noise ) { cout << noise << endl;}

    Dog();
    Dog(int, int);
    Dog(int,int,string);
    ~Dog();

    int getAge(){return age;}
    int getWeight(){return weight;}
    string getColor(){return color;}

};

Dog::Dog(){
    age = 1;
    weight = 2;
    color = "black";
}

Dog::Dog(int age, int weight){
    this -> age = age;
    this -> weight = weight;
    color = "white";
}

Dog::Dog(int age, int weight, string color){
    this -> age = age;
    this -> weight = weight;
    this -> color = color;
}

Dog::~Dog(){
    cout << "Object Destroyed." << endl;
}

int main(){

    Dog fido(3, 15, "brown");

    cout << "Fido is a " << fido.getColor() << " dog" << endl;
    cout << "Fido is " << fido.getAge() << " years old" << endl;
    cout << "Fido weighs " << fido.getWeight() << "lbs" << endl;

    fido.bark();

    Dog pooch(4, 18, "gray");

    cout << "Pooch is a " << pooch.getAge();
    cout << " year old " << pooch.getColor();
    cout << " dog who weighs " << pooch.getWeight();
    cout << " pounds.";

    pooch.bark();

    Dog rex;

    cout << "Rex is a " << rex.getAge();
    cout << " year old " << rex.getColor();
    cout << " dog who weighs " << rex.getWeight();
    cout << " pounds.";

    rex.bark("GRRR!");

    Dog sammy(2,6);

    cout << "Sammy is a " << sammy.getAge();
    cout << " year old " << sammy.getColor();
    cout << " dog who weighs " << sammy.getWeight();
    cout << " pounds.";

    sammy.bark("BOWOW!");

    return 0;
}